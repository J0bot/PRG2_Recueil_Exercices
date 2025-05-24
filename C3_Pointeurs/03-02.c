#include <stdio.h>
#include <string.h>

/**
 * Exercice: Tableaux et pointeurs
 * 
 * Instructions:
 * 1. Déclarez un tableau contenant le contenu de la mémoire montrée dans l'image.
 * 2. Déclarez ensuite un tableau de pointeurs vers ces trois chaînes de caractères
 *    qui affichera les trois premiers jours de la semaine dans l'ordre.
 * 
 * Indications:
 * - La fonction sprintf(char *str, char *format, ...) fonctionne comme printf()
 *   mais écrit le résultat à l'adresse stockée dans *str*
 */

int main(void) {
    // Votre code ici
    char array[60];
    char *ptr;
    char *strs[3];
    int i;
    ptr = array;
    sprintf(ptr, "%s", "Mercredi");

    strs[2] = ptr; 

    ptr += 18;

    sprintf(ptr, "%s", "Lundi"); 

    strs[0] = ptr; 

    ptr = array + 42; 

    sprintf(ptr, "%s", "Mardi");

    strs[1] = ptr;

    for(int i = 0 ; i<3; i++){
        printf("%s\n", strs[i]);
    }

    for(int i = 0; i<60; i++)
    {
        printf("%c", array[i]);
        printf("|");
    }


    return 0;
}