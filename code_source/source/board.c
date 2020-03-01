/** ============================================================
 ** board.c
 ------------------------------------------------------------
 ** Role .......... : Gestion du plateau de jeu
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 12/01/2018
 ===============================================================
 **/
 
// ----------------------
// * Fichier d'include
// ----------------------
#include "header/main.h"

// -------------------------
// * Lecture donnée externe 
// -------------------------
extern const unsigned char level[];
extern const unsigned char level_test[];


static unsigned char level_ram[16][12];
// ----------------------
// * Affichage du plateau
// ----------------------

void draw_board()
{
	
	unsigned char x=0;
	unsigned char y=0;
	unsigned char id=0;
	
	
	for(y=0;y<12;y++)
	{
		for(x=0;x<16;x++)
		{
			
			
			id=level[y*16+x+(player.level*192)];
			
			// Mémorisation de la position du joueur en Case. 
			if (id == 7 || id == 8)
			{
				player.px = x;
				player.py = y;
				id=id-2; // Pose du bon tiles (-2) sous le heros. 
			}
			
			// Pose du tiles (id) à X/Y en case 
			SMS_setTileatXY(x*2,y*2,id*4);
			SMS_setTileatXY(x*2+1,y*2,id*4+1);
			SMS_setTileatXY(x*2,y*2+1,id*4+2);
			SMS_setTileatXY(x*2+1,y*2+1,id*4+3);
			
			// Mémorisation dans le buffer ram
			level_ram[x][y]=id;
		}
	}
	
	SMS_displayOn(); // Allumage de l'écran
	
}

// -----------------------
// Récupérer l'id du tiles 
// -----------------------

unsigned char get_id_tiles(unsigned char case_x,unsigned char case_y)
{
	return level_ram[case_x][case_y];
	
}

// ------------------------------
// Modifier la ram avec un tiles 
// ------------------------------

void set_update_tiles(unsigned char case_x,unsigned char case_y,unsigned char id)
{
	level_ram[case_x][case_y]=id;
	
	// Pose du tiles (id) à X/Y en case 
	SMS_setTileatXY(case_x*2,case_y*2,id*4);
	SMS_setTileatXY(case_x*2+1,case_y*2,id*4+1);
	SMS_setTileatXY(case_x*2,case_y*2+1,id*4+2);
	SMS_setTileatXY(case_x*2+1,case_y*2+1,id*4+3);
}

// ==============
// Effacer écran
// ==============
void cls()
{
	unsigned char x;
	unsigned char y;
	SMS_waitForVBlank ();
	for(y=0;y<24;y++)
	{	
		for(x=0;x<32;x++)
		{
			SMS_setTileatXY(x,y,0);
		}
	}	
	SMS_hideSprite(0);
	SMS_hideSprite(1);
	SMS_hideSprite(2);
	SMS_hideSprite(3);
	SMS_copySpritestoSAT ();	
}


// --------------------------------------------------------------
// Teste si le joueur à placer toutes les caisses sur les cibles
// --------------------------------------------------------------
unsigned char test_victoire()
{
	unsigned char x;
	unsigned char y;
	unsigned char no_fin=0;
	
	for(y=0;y<12;y++)
	{	
		for(x=0;x<16;x++)
		{
			if (level_ram[x][y]==6)
			{
				no_fin=1;
			}
		}
	}

	return no_fin;
}

