#include <stdio.h>
#include <stdlib.h>


/**
 * Exercice: Table de multiplication
 * 
 * Instructions:
 * Complétez le code pour qu'il stocke la table de multiplication des nombres de 1 à 7
 * par les nombres de 1 à 6.
 * 
 * Résoudre ce problème de 4 manières distinctes:
 * 1. En stockant les données dans un tableau 1d de 42 éléments, rempli et affiché en
 *    parcourant ce tableau 1d
 * 2. En stockant les données dans un tableau 2d de 6 lignes et 7 colonnes, rempli et affiché
 *    en parcourant ce tableau 2d
 * 3. En stockant et remplissant en 1d, et en le parcourant en 2d après conversion du tableau
 *    dans le type pointeur approprié (sans copier les données)
 * 4. En stockant et remplissant en 2d, et parcourant en 1d après conversion du tableau
 *    dans le type pointeur approprié (sans copier les données)
 */

#define WIDTH 7
#define HEIGHT 6

int main() {
    // Méthode 1: Tableau 1D
    // Votre code ici

    int *tab_1d = malloc(WIDTH*HEIGHT * sizeof(int));
    int index = 0 ;
    for(int i = 0 ; i< HEIGHT; i++){
        for(int j = 0 ; j< WIDTH; j++){
            tab_1d[index++] = (i+1) * (j+1);
        }
    }
    index = 0;

    for(int i = 0 ; i< HEIGHT; i++){
        for(int j = 0 ; j< WIDTH; j++){
            printf("%s%d",tab_1d[index]<10? "  ": " ", tab_1d[index++]);
        }
        printf("\n");
    }


    free(tab_1d);
    
    // Méthode 2: Tableau 2D
    // Votre code ici
    
    // Méthode 3: Remplissage 1D, parcours 2D
    // Votre code ici
    
    // Méthode 4: Remplissage 2D, parcours 1D
    // Votre code ici
    
    return 0;
}
