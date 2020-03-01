/** ============================================================
 ** data_level.c
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

// ********
// * Aide *
// ********

/**
0 = Bloc Vide
1 = Tuile de toiture
2 = Tuile du mur
3 = Caisse sur cible
4 = Caisse hors cible
5 = sol vide
6 = cible
7 = joueur sur sol
8 = joueur sur cible
**/

const unsigned char level[] = {
	

// Level 0
0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,0,0,1,2,2,2,2,2,1,0,0,0,0,0,
0,0,0,0,1,6,5,6,5,6,1,0,0,0,0,0,
0,0,0,0,1,5,5,1,5,1,1,0,0,0,0,0,
0,0,1,1,1,5,4,2,5,2,1,0,0,0,0,0,
0,0,1,2,2,5,5,4,3,5,1,0,0,0,0,0,
0,0,1,5,5,5,5,4,5,7,1,0,0,0,0,0,
0,0,1,5,5,5,1,1,5,5,1,0,0,0,0,0,
0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

	
// Level 1
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,1,2,2,2,2,2,2,2,1,0,0,0,0,
0,0,0,1,5,5,6,6,6,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,4,4,4,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,7,5,5,5,1,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

//Level 2
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,1,2,2,2,2,2,2,2,1,0,0,0,0,
0,0,0,1,5,5,6,6,6,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,1,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,2,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,4,4,4,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,7,5,5,5,1,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

// Level 3
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,0,1,2,2,2,2,2,2,2,2,2,1,0,0,
0,0,0,1,5,5,6,6,6,5,5,5,6,1,0,0,
0,0,0,1,5,5,5,1,5,5,5,1,1,1,0,0,
0,0,0,1,5,5,5,2,5,4,5,1,2,2,0,0,
0,0,0,1,5,5,4,4,4,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,7,5,5,5,1,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

// Level 4
0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,
0,0,0,1,1,1,1,1,1,2,2,2,2,1,0,0,
0,0,0,1,2,2,2,1,1,5,5,5,5,1,0,0,
0,0,0,1,5,5,5,1,2,5,4,3,6,1,0,0,
0,0,0,1,5,6,5,1,5,5,5,5,1,1,0,0,
0,0,0,1,5,5,5,1,4,1,5,1,1,2,0,0,
0,0,0,1,7,5,5,2,5,2,5,1,2,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,5,5,5,5,5,5,5,1,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

//Level 5
0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,
0,0,0,1,2,2,2,2,1,0,0,0,0,0,0,0,
0,0,0,1,5,5,5,5,1,1,1,1,1,1,1,1,
0,0,0,1,5,1,1,4,1,1,1,2,2,2,2,1,
1,1,1,1,5,1,2,5,2,2,2,5,5,5,6,1,
1,2,2,2,5,2,5,5,5,5,5,5,5,5,6,1,
1,5,5,5,4,5,5,5,1,7,1,5,5,5,6,1,
1,5,5,5,4,5,5,5,1,1,1,1,1,1,1,1,
1,5,5,1,5,5,5,5,1,1,1,1,2,2,2,2,
1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

//Level 6
0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,
0,0,0,0,0,0,1,2,2,2,2,1,0,0,0,0,
0,0,0,0,0,0,1,5,5,5,5,1,0,0,0,0,
0,0,0,0,1,1,1,5,6,4,5,1,0,0,0,0,
0,0,0,0,1,1,1,5,4,1,1,1,0,0,0,0,
0,0,0,0,1,1,2,5,5,2,2,1,0,0,0,0,
0,0,0,0,1,2,5,7,5,3,5,1,0,0,0,0,
0,0,0,0,1,6,5,5,5,5,5,1,0,0,0,0,
0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

// Level 7
0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,0,1,1,1,2,2,2,2,2,1,2,1,0,0,
0,0,1,1,1,1,5,5,3,6,6,1,5,1,0,0,
0,1,1,2,2,2,5,1,5,1,1,1,5,1,0,0,
0,1,2,5,5,4,5,2,4,2,2,2,5,1,0,0,
0,1,5,5,5,4,5,5,5,5,5,5,5,1,0,0,
0,1,5,5,5,1,1,1,5,5,5,5,5,1,0,0,
0,1,1,1,1,1,2,2,6,5,5,5,5,1,0,0,
0,2,2,1,1,1,7,5,5,5,5,5,5,1,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

// Level 8
0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,0,0,1,2,2,2,2,2,1,0,0,0,0,0,
0,0,0,0,1,6,5,6,5,6,1,0,0,0,0,0,
0,0,0,0,1,5,5,1,5,1,1,0,0,0,0,0,
0,0,0,0,1,5,4,2,5,2,1,0,0,0,0,0,
0,0,0,0,1,5,5,4,4,5,1,0,0,0,0,0,
0,0,0,0,1,6,5,5,4,7,1,0,0,0,0,0,
0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,0,0,2,2,2,2,2,2,2,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

};

/*
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

*/

const unsigned char level_test[] = {

0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,
0,0,0,1,2,2,2,2,1,0,0,0,0,0,0,0,
0,0,0,1,5,5,5,5,1,1,1,1,1,1,1,1,
0,0,0,1,5,1,1,4,1,1,1,2,2,2,2,1,
1,1,1,1,5,1,2,5,2,2,2,5,5,5,6,1,
1,2,2,2,5,2,5,5,5,5,5,5,5,5,6,1,
1,5,5,5,4,5,5,5,1,7,1,5,5,5,6,1,
1,5,5,5,4,5,5,5,1,1,1,1,1,1,1,1,
1,5,5,1,5,5,5,5,1,1,1,1,2,2,2,2,
1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

};