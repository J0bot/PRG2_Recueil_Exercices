#include <stdio.h>    // printf, scanf
#include <stddef.h>   // size_t
#include <stdlib.h>   // calloc, free, malloc
#include <stdint.h>   // int64_t 
#include <inttypes.h> // SCNd64

/**
 * Exercice: Table de multiplication (2)
 * 
 * Instructions:
 * Modifier le code de l'exercice 04-02-01 pour qu'il permette de créer une table
 * de multiplication de taille quelconque.
 * 
 * Le table de multiplication doit être stockée dans un tableau 2d de type `int **`
 * dont chaque ligne est allouée indépendamment des autres. Prenez soin de garantir
 * l'absence de fuites mémoire.
 */



int main() {
    size_t lignes;
    size_t colonnes;
    int **tab;

    // 1. Demander à l'utilisateur le nombre de lignes et de colonnes
    // Votre code ici
    printf("Entrez le nombre de lignes: ");
    while(1){
        if(scanf("%lu", &lignes)!=1){
            printf("Erreur de saisie. Entrez un entier positif : ");
            while (getchar() != '\n');
            continue;
        }
        break;
    }

    printf("Entrez le nombre de colonnes: ");
    while(1){
        if(scanf("%lu", &colonnes)!=1){
            printf("Erreur de saisie. Entrez un entier positif : ");
            while(getchar()!= '\n');
            continue;
        }
        break;
    }



    
    // 2. Allouer le tableau de tableaux
    // Votre code ici

    tab = malloc(lignes * sizeof(int*));
    if(tab == NULL){
        printf("Erreur d'allocation de mémoire pour tab\n");
        goto free_tab;
    }

    
    // 3. Allouer les tableaux pour chaque ligne
    // Votre code ici

    for(int i = 0 ; i<lignes; i++){
        tab[i] = malloc(colonnes * sizeof(int));
        if(tab[i] ==NULL){
            printf("Erreur d'allocation de mémoire pour tab[%d]", i);
            goto free_all;
        }
    }
    
    // 4. Remplir avec les valeurs de la table de multiplication
    // Votre code ici

    for(int i = 0 ; i<lignes; i++){
        for(int j = 0 ; j<colonnes; j++){
            tab[i][j] = (i+1) * (j+1);
        }
    }
    
    // 5. Afficher la table
    // Votre code ici

    for(int i = 0 ; i<lignes; i++){
        for(int j = 0 ; j<colonnes; j++){
            if(lignes*colonnes<100){
                printf("%2d ", tab[i][j]);
            }
            else{
                printf("%3d ", tab[i][j]);
            }
        }
        printf("\n");
    }

    
    // 6. Libérer la mémoire (attention aux fuites mémoire!)
    // Votre code ici

free_all:
    for(int i = 0 ; i< lignes; i++){
        free(tab[i]);
    }

free_tab:

    free(tab);
    
    
    return EXIT_SUCCESS;
}
