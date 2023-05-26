# Mini Projet C

Ce projet contient des fonctions codées en C qui permettent le chiffrement de messages.
Il contient différentes fonctions permettant la vérification de caractères alphanumériques, le chiffrement et le déchiffrement César, ainsi que l'affichage d'une chaîne de caractères.

## Fonctions

### `bool estAlphanumerique(char *texte)`

Cette fonction permet de vérifier si une chaîne de caractères est alphanumérique ou non. Pour cela on inclut la bibliothéque <ctype.h> afin d'utiliser "isalnum()".
Notre fonction renvoie vrai (true) si tous les caractères de la chaîne sont alphanumériques, sinon elle renvoie faux (false).

### `void chiffrer_cesar(char *texte, int decalage)`

Cette fonction chiffre une chaîne de caractères donnée en utilisant un décalage spécifié en paramètre.
Les caractères alphabétiques de la chaîne sont décalés vers la droite en suivant le chiffrement César. 

### `void dechiffrer_cesar(char *texte, int decalage)`

Cette fonction déchiffre une chaîne de caractères en utilisant un décalage spécifié en paramètre.
Les caractères alphabétiques de la chaîne sont décalés vers la gauche en suivant le chiffrement César.

### `void affichage(char *texte)`

Cette fonction affiche une chaîne de caractères en appelant toutes les fonctions définies précédemment.

### `void main()`

Cette fonction permet de lancer l'application. On utilise "scanf("%[^\n]%C", entree)" pour gérer les espaces : scanf() est exécutée tant que le caractère n'est pas un retour à la ligne (\n). 

## Utilisation

Il suffit d'exécuter le makefile() en tapant "make" pour compiler le main(). Ensuite on exécute le main en faisant "./main" dans notre terminal.
