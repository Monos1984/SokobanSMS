/** ============================================================
 ** game_update.c
 ------------------------------------------------------------
 ** Role .......... : Les niveaux du jeu
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 12/01/2018
 ===============================================================
 **/
 
// ----------------------
// * Fichier d'include
// ----------------------
#include "header/main.h"

void game_update()
{
	unsigned char id_tiles;
	unsigned char id_tiles_des;
	// Tester si le joueur veut recommencer le niveaux
	
	if (testing_pad()==10)
	{
			SMS_waitForVBlank ();
			draw_board();
	}
	
	
	// Tester si le joueur veut se déplacer
	
	// Mouvement à droite
	if (testing_pad()==6) 
	{
		
		// Récupération du tiles à droite du joueur
		id_tiles = get_id_tiles(player.px+1,player.py);
		
		// si le tiles est un sol ou une cobible alors mouvement
		if (id_tiles== 5 || id_tiles == 6)
		{ 
			player.px = player.px+1;
			
		}
		
		
		// Si le tiles est une caise Caise 4 (hors cible) 3 (cible)
		if (id_tiles==4 || id_tiles==3)
		{
			// récupération du tiles à droite de la caise
			id_tiles_des = get_id_tiles(player.px+2,player.py);
			
			// Si c'est un sol 
		 	if (id_tiles_des== 5)
			{ 
				
				// Pose de la caise hor cible sur la nouvelle case
				set_update_tiles(player.px+2,player.py,4);
				
				
				// Pose d'un sol  ou un cible sur l'ancienne case
				if (id_tiles==4)
				{ 	
					set_update_tiles(player.px+1,player.py,5);
				}
				else
				{
					set_update_tiles(player.px+1,player.py,6);
				}

				// Mouvement du joueur sur la nouvelle case
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.px = player.px+1;
			}
			
			// Si la case à droite est une cible
			else if (id_tiles_des == 6)
			{
				// Pose de la caisse en mode cible
				set_update_tiles(player.px+2,player.py,3);
				
				
				if (id_tiles==4)
				{ 
					set_update_tiles(player.px+1,player.py,5);
				}
				else
				{
					set_update_tiles(player.px+1,player.py,6);
				}
				
				// Mouvement du joueur
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.px = player.px+1;
			}
			
		}	
		
		
		
		
		
		
		
	}
	
	// Mouvement à gauche 
	if (testing_pad()==4) 
	{
		id_tiles = get_id_tiles(player.px-1,player.py);
		
		if (id_tiles== 5 || id_tiles == 6)
		{ 
			
			player.px = player.px-1;
		}
		// 
		
			// Si le tiles est une caise Caise 4 (hors cible) 3 (cible)
		if (id_tiles==4 || id_tiles==3)
		{
			// récupération du tiles à droite de la caise
			id_tiles_des = get_id_tiles(player.px-2,player.py);
			
			// Si c'est un sol 
		 	if (id_tiles_des== 5)
			{ 
				
				// Pose de la caise hor cible sur la nouvelle case
				set_update_tiles(player.px-2,player.py,4);
				
				
				// Pose d'un sol  ou un cible sur l'ancienne case
				if (id_tiles==4)
				{ 	
					set_update_tiles(player.px-1,player.py,5);
				}
				else
				{
					set_update_tiles(player.px-1,player.py,6);
				}

				// Mouvement du joueur sur la nouvelle case
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.px = player.px-1;
			}
			
			// Si la case à droite est une cible
			else if (id_tiles_des == 6)
			{
				// Pose de la caisse en mode cible
				set_update_tiles(player.px-2,player.py,3);
				
				
				if (id_tiles==4)
				{ 
					set_update_tiles(player.px-1,player.py,5);
				}
				else
				{
					set_update_tiles(player.px-1,player.py,6);
				}
				
				// Mouvement du joueur
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.px = player.px-1;
			}
			
		}
		
		
		
		
		// 	
	}
	
	// Mouvement en haut 
	if (testing_pad()==8) 
	{
		id_tiles = get_id_tiles(player.px,player.py-1);
		if (id_tiles== 5 || id_tiles == 6)
		{ 
			player.py = player.py-1;
			
		}
		
		//
		
			// Si le tiles est une caise Caise 4 (hors cible) 3 (cible)
		if (id_tiles==4 || id_tiles==3)
		{
			// récupération du tiles à droite de la caise
			id_tiles_des = get_id_tiles(player.px,player.py-2);
			
			// Si c'est un sol 
		 	if (id_tiles_des== 5)
			{ 
				
				// Pose de la caise hor cible sur la nouvelle case
				set_update_tiles(player.px,player.py-2,4);
				
				
				// Pose d'un sol  ou un cible sur l'ancienne case
				if (id_tiles==4)
				{ 	
					set_update_tiles(player.px,player.py-1,5);
				}
				else
				{
					set_update_tiles(player.px,player.py-1,6);
				}

				// Mouvement du joueur sur la nouvelle case
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.py = player.py-1;
			}
			
			// Si la case à droite est une cible
			else if (id_tiles_des == 6)
			{
				// Pose de la caisse en mode cible
				set_update_tiles(player.px,player.py-2,3);
				
				
				if (id_tiles==4)
				{ 
					set_update_tiles(player.px,player.py-1,5);
				}
				else
				{
					set_update_tiles(player.px,player.py-1,6);
				}
				
				// Mouvement du joueur
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.py = player.py-1;
			}
			
		}
		
		//
	}
	
	// Mouvement en bas
	if (testing_pad()==2) 
	
	{
	
		id_tiles = get_id_tiles(player.px,player.py+1);
		if (id_tiles== 5 || id_tiles == 6)
		{ 
			player.py = player.py+1;
		}
	
	//
	// Si le tiles est une caise Caise 4 (hors cible) 3 (cible)
		if (id_tiles==4 || id_tiles==3)
		{
			// récupération du tiles à droite de la caise
			id_tiles_des = get_id_tiles(player.px,player.py+2);
			
			// Si c'est un sol 
		 	if (id_tiles_des == 5)
			{ 
				
				// Pose de la caise hor cible sur la nouvelle case
				set_update_tiles(player.px,player.py+2,4);
				
				
				// Pose d'un sol  ou un cible sur l'ancienne case
				if (id_tiles==4)
				{ 	
					set_update_tiles(player.px,player.py+1,5);
				}
				else
				{
					set_update_tiles(player.px,player.py+1,6);
				}

				// Mouvement du joueur sur la nouvelle case
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.py = player.py+1;
			}
			
			// Si la case à droite est une cible
			else if (id_tiles_des == 6)
			{
				// Pose de la caisse en mode cible
				set_update_tiles(player.px,player.py+2,3);
				
				
				if (id_tiles==4)
				{ 
					set_update_tiles(player.px,player.py+1,5);
				}
				else
				{
					set_update_tiles(player.px,player.py+1,6);
				}
				
				// Mouvement du joueur
				PSGPlay (caisse_psg);
				PSGFrame ();
				player.py = player.py+1;
			}
			
		}
		
	//
	
	
	
	}
	
	
}

