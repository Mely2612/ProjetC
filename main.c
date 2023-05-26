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
*  Nom du fichier :  main.c                                                   *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#define LONGUEUR_MAX 10000

void main() {
    printf("Veuillez entrer un texte sans caractères spéciaux et sans retour à la ligne : \n");
    char entree[LONGUEUR_MAX];
    /* lit la chaîne de caractères complète, y compris les espaces
    et consomme le caractère de retour à la ligne restant dans le tampon d'entrée
    */
    scanf("%[^\n]%*c",entree);
    affichage(entree);
}