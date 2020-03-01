/** ============================================================
 ** Nom du Projet ........ : Little Sokoban
 ** Date initiation ...... : 10/01/2018
 ** Version du jeu ....... : 0.0.0
 ** Version du projet .... : 0.0.1
 ** Date de sauvegarde ... : 15/01/2018
 ** Deployement .......... : En programmation
 ** Licence .............. : Open Source
 ** Compilation Megadrive..: //
 ** Compilation Master ....:  KitDevSMS
 ** ============================================================
 Game Jam Hors concours numeros 12 de Gamecodeur
 
 
 ---------------------------------------------------------------
 ** main.c
 ---------------------------------------------------------------
 ** Role .......... : Fichier Principale du programme
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 10/01/2018
 ---------------------------------------------------------------
 ** Note du Fichier :
 ---------------------------------------------------------------
 * La programmation du fichier main doit être générique.
 ...............................................................
 * La boucle du programme est infini. Cela fonctionne pour une
 * console mais pas pour un micro ordinateur dont il faut quitter
 * le programme. Penser à modifier ça en cas de portage sur ce
 * type de machine
 ** ============================================================== **/

// *********************
// ** Fichier Include **
// *********************
#include "header/main.h"

// -------------------------------------------
// * Header
// -------------------------------------------


// Fichier d'entête obligatoire pour être lisible sur une vrais console.
#define H_PRODUCTCODE 0
#define H_REVISION 0
#define H_VERMAJ 0
#define H_VERMIN 0
#define H_AUTHOR "Monos"
#define H_NAME "Sokoban"
#define H_DESCR "n_c"



SMS_EMBED_SEGA_ROM_HEADER(H_PRODUCTCODE ,H_REVISION);
SMS_EMBED_SDSC_HEADER_AUTO_DATE(H_VERMAJ,H_VERMIN,H_AUTHOR,H_NAME,H_DESCR);


//	*****************
//  ** Boucle main **
//	*****************
void main () 
{ 

	// -------------
	// * Variables *
	// -------------
char V_Time=0;
	
	// ------------------------
    // * Initiation de départ
    // ------------------------
    scene_set(SCENE_INIT);

    // ----------------------
    // * Boucle du programme
    // ----------------------

    while(1) 
	{
	
        // -------------------------
        // * SCENE_INIT
        // -------------------------
        if ( scene_get() == SCENE_INIT )
        {
			init();
			scene_set(SCENE_TITLESCREEN);
		

        }
		
		// -------------------------
        // * SCENE_TITLESCREEN
        // -------------------------
        else if ( scene_get() == SCENE_TITLESCREEN )
        {
		PSGPlayNoRepeat(m1_psg);
			SMS_loadBGPalette(palette_bin);
			
		  SMS_loadTiles(graphismes_bin, 0, graphismes_bin_size);
		  		SMS_waitForVBlank ();
		  
  SMS_loadTileMap (0,0,(unsigned int *)tilemap_bin,tilemap_bin_size);
  
  
			SMS_displayOn();
			while ( scene_get() == SCENE_TITLESCREEN)
            {
				   PSGFrame();
				   	SMS_waitForVBlank ();
				if (testing_pad()==10)
				{
					PSGStop ();
					scene_set(SCENE_GAME);
					SMS_displayOff();
					SMS_waitForVBlank ();
				}
			}
			load_board_asset();
			load_player_asset();
        }
		
		// -------------------------
        // * SCENE_GAME
        // -------------------------
        else if ( scene_get() == SCENE_GAME )
        {
		
			SMS_waitForVBlank ();
			draw_board();
			
			while ( scene_get() == SCENE_GAME)
            {
				
				game_update();
				SMS_waitForVBlank ();
				draw_update();
				
				if (PSGGetStatus ()==1) 
				{
					V_Time=V_Time+1;
				}
				else
				{
					V_Time=0;	
				}
				
				if ((V_Time==15) && (PSGGetStatus ()==1))
				{				
					PSGStop ();
					V_Time=0;
				}
				
				
				if (test_victoire()==0)
				{
					scene_set(NEXT_LEVEL);
				}
			
			}
			
			
        }
		
		
		
		else if (scene_get()==NEXT_LEVEL)
		{
			cls();
			player.level = player.level+1;
			while ( scene_get() == NEXT_LEVEL)
            {
			
			if (player.level<9)
			{ scene_set(SCENE_GAME);}
			else
			{
				player.level=0;
				scene_set(SCENE_TITLESCREEN);
			}
			
			
			}
			
		}
		
		else if ( scene_get() == SCENE_GAME_OVER )
        {
			
            while ( scene_get() == SCENE_GAME_OVER)
            {
				
			
			
			}
        }


	
	} // Boucle principale

} // Main