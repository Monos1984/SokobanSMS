/** ============================================================
 ** workflow.h
 ------------------------------------------------------------
 ** Role .......... : Fichier d'entête des Scenes
 ** Auteur ........ : Loïc Lété sur une idée de Michel Louvet
 ** Mise à jour ... : 31/12/2017
 ===============================================================
 ** Note du Fichier :
 ---------------------------------------------------------------


 ===============================================================
 **/


#ifndef WORKFLOW_H
    #define WORKFLOW_H

    // ------------------------------
    // * Les Defines des Scenes
    // ------------------------------
    #define SCENE_INIT 0
    #define SCENE_TITLESCREEN 1
    #define SCENE_OPTION 2
    #define SCENE_GAME 3
    #define SCENE_GAME_OVER 4
	#define NEXT_LEVEL 5
    #define SCENE_TEST 100



    // ----------------------------------
    // * Déclaration des prototypes
    // ----------------------------------

    void scene_set(unsigned char value);
    int scene_get();

#endif
