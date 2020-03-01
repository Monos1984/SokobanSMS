/** ============================================================
 ** draw_update_file.c
 ------------------------------------------------------------
 ** Role .......... : Update des graphismes
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 13/01/2018
 ===============================================================
 **/

// ----------------------
// * Fichier d'include
// ----------------------
#include "header/main.h"

s_player player;


void draw_update()
{
	sprite_update();	
	
	
}

void sprite_update()
{
	
	// Update du sprite joueur
			SMS_initSprites ();
			SMS_addSprite (player.px * 16 , player.py * 16,256);
			SMS_addSprite (player.px * 16 + 8,player.py * 16,257);
			SMS_addSprite (player.px * 16 , player.py * 16 + 8 ,258);
			SMS_addSprite (player.px * 16 + 8, player.py * 16+8,259);
			SMS_copySpritestoSAT ();
	
	
	
}