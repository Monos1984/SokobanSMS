/** ===================================================================
 ** board.h
 ----------------------------------------------------------------------
 ** Role .......... : Fichier entete
 ** Auteur ........ : Loïc Lété
 ** Mise à jour ... : 11/01/2018
 ======================================================================
 ** Note du Fichier :
 ----------------------------------------------------------------------
 * 
 ======================================================================= **/

 #ifndef  Board_H
    #define Board_H

    // ----------------------------------
    // * Déclaration des prototypes
    // ----------------------------------
   void draw_board(); 
   unsigned char get_id_tiles(unsigned char case_x,unsigned char case_y);
   void set_update_tiles(unsigned char case_x,unsigned char case_y,unsigned char id);
   unsigned char test_victoire();
   void cls();

#endif