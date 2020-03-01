/** ============================================================
 ** load_asset.c
 ------------------------------------------------------------
 ** Role .......... : Chargement des assets !
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 12/01/2018
 ===============================================================
 **/
// --------------------------------
// * Chargement des datas externes 
// --------------------------------

extern const unsigned char tiles_board[];
extern const unsigned char palette_board[];

extern const unsigned char palette_sprite[];
extern const unsigned char sprite_joueur[];


 
// ----------------------
// * Fichier d'include
// ----------------------
#include "header/main.h"

void load_board_asset()
{
	SMS_loadBGPalette (palette_board);
	SMS_loadTiles (tiles_board, 0,896);		
}

void load_player_asset()
{
	SMS_loadSpritePalette (palette_sprite);
	SMS_loadTiles (sprite_joueur, 256,128);
}
