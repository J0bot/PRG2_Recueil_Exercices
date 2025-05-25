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

    printf("tab1d : \n");

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
            printf("%2d ", tab_1d[index++]);
        }
        printf("\n");
    }


    free(tab_1d);

    printf("\n");
    
    // Méthode 2: Tableau 2D
    // Votre code ici
    {
        
    printf("tab2d : \n");
    
    int tab_2d[HEIGHT][WIDTH];

    for(int i = 0; i<HEIGHT; i++){
        for(int j = 0; j< WIDTH; j++){
            tab_2d[i][j] = (i+1) * (j+1);
        }
    }

    for(int i = 0; i<HEIGHT; i++){
        for(int j = 0; j< WIDTH; j++){
            printf("%2d ", tab_2d[i][j]);
        }
        printf("\n");
    }
    }

    printf("\n");

    // Méthode 3: Remplissage 1D, parcours 2D
    // Votre code ici

    printf("tab1d to 2d : \n");


    int *tab_1d_to_2d = malloc(WIDTH*HEIGHT * sizeof(int));
    for(int i = 0 ; i< HEIGHT; i++){
        for(int j = 0 ; j< WIDTH; j++){
            tab_1d_to_2d[i*WIDTH + j] = (i+1) * (j+1);
        }
    }

    int (*tab_2d_from_1d)[WIDTH] = (int(*)[WIDTH]) tab_1d_to_2d;
    for(int i = 0 ; i<HEIGHT; i++){
        for(int j = 0 ; j<WIDTH; j++){
            printf("%2d ", tab_2d_from_1d[i][j]);
        }
        printf("\n");
    }

    free (tab_1d_to_2d);

    printf("\n");

    
    // Méthode 4: Remplissage 2D, parcours 1D
    // Votre code ici

    printf("tab2d to 1d : \n");


    int tab2d_to_1d[HEIGHT][WIDTH];
    for(int i = 0; i<HEIGHT; i++){
        for(int j = 0; j< WIDTH; j++){
            tab2d_to_1d[i][j] = (i+1) * (j+1);
        }
    }

    int *tab1d_from_2d = (int *) tab2d_to_1d;
    
    for(int i = 0 ; i< HEIGHT; i++){
        for(int j = 0 ; j< WIDTH; j++){
            printf("%2d ", tab1d_from_2d[i * WIDTH + j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
