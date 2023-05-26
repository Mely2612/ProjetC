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
*  Nom du fichier :  fonctions.c                                              *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "fonctions.h"

// vérifie si le texte entré est alphanumérique ou non
bool estAlphanumerique(char *texte) {
    while (*texte) {
        if (isalnum(*texte) || *texte == ' ') {
            return true;
        }
        texte++;
    }
    return false;
}

// chiffre le texte en paramètre à l'aide du décalage entré
void chiffrer_cesar(char *texte, int decalage) {
    while (*texte) {
        if (isalpha(*texte)) {
            /*stocke la lettre du texte
            ? vérifie si c'est une minuscule ou une majuscule
            */
            char base = islower(*texte) ? 'a' : 'A';
            *texte = base + (*texte - base + decalage) % 26;
        }
        texte++;
    }
}

// déchiffre le texte en paramètre à partir du décalage entré lors du chiffrement
void dechiffrer_cesar(char *texte, int decalage) {
    chiffrer_cesar(texte, 26 - decalage);
}

// affiche le texte chiffré puis déchiffré ou un message d'erreur si le texte n'est pas alphanumérique
void affichage(char *texte) {
    if (!(estAlphanumerique(texte))) {
        printf("La chaîne n'est pas alphanumérique.\n");
    } else {
        int decalage;
        printf("Entrez un décalage : ");
        scanf("%d", &decalage);

        chiffrer_cesar(texte, decalage);
        printf("Le texte chiffré est : %s\n", texte);

        dechiffrer_cesar(texte, decalage);
        printf("Le texte déchiffré est : %s\n", texte);
    }
}