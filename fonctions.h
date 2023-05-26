/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :       Projet 3 : Chiffrement de messages                        *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :  BEAUJOUR Jade                                               *
*                                                                             *
*  Nom-prénom2 :  IYAMU Mélanie                                               *
*                                                                             *
*  Nom-prénom3 :  RANDRIANARISON Mirindra                                     *
*                                                                             *
*  Nom-prénom4 :                                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  fonctions.h                                              *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// vérifie si le texte entré est alphanumérique ou non
bool estAlphanumerique(char *texte);

// chiffre le texte en paramètre à l'aide du décalage entré
void chiffrer_cesar(char *texte, int decalage);

// déchiffre le texte en paramètre à partir du décalage entré lors du chiffrement
void dechiffrer_cesar(char *texte, int decalage);

// affiche le texte chiffré puis déchiffré ou un message d'erreur si le texte n'est pas alphanumérique
void affichage(char *texte);