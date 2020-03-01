/** ============================================================
 ** input.c
 ------------------------------------------------------------
 ** Role .......... : Initiation du system
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 11/01/2018
 ===============================================================
 **/
 
// ----------------------
// * Fichier d'include
// ----------------------
#include "header/main.h"


char testing_pad()
{
	static char id_touche = 0;
	
	if (SMS_getKeysPressed() & PORT_A_KEY_LEFT)
	{
		id_touche = 4;
	}
	else if (SMS_getKeysPressed() & PORT_A_KEY_RIGHT)
	{
		id_touche = 6;
	}
	else if (SMS_getKeysPressed() & PORT_A_KEY_UP)
	{
		id_touche = 8;
	}
	else if (SMS_getKeysPressed() & PORT_A_KEY_DOWN)
	{
		id_touche = 2;
	}
	else if (SMS_getKeysPressed() & PORT_A_KEY_1)
	{
		id_touche = 10;
	}
	else 
	{
		id_touche = 0;
	}
	
	return id_touche;
}