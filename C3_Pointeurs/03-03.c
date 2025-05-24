#include <stdio.h>
#include <stdlib.h>

/**
 * Exercice: Fonctions et arguments
 * 
 * Instructions:
 * Écrire un programme en langage C qui prend en entrée deux tableaux de 20 entiers,
 * calcule leur somme élément par élément et stocke le résultat dans un troisième tableau.
 * Ensuite, le programme doit afficher le contenu des trois tableaux.
 * 
 * Suggestions:
 * - Créez une fonction pour calculer la somme des tableaux
 * - Créez une fonction pour afficher un tableau
 */

#define TAILLE 20

// Votre code ici (déclaration des fonctions)

int *sum_arr(int *arr1, int *arr2){
    int *sum = malloc(TAILLE * sizeof(int)); 
    for(int i = 0; i< TAILLE; i++){
        sum[i] = arr1[i] + arr2[i];
    }
    return sum;
}

void print_arr(int *arr){
    for(int i = 0; i< TAILLE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Votre code ici
    int *arr1 = malloc(TAILLE * sizeof(int));
    int *arr2 = malloc(TAILLE * sizeof(int));

    for(int i = 0; i< TAILLE; i++){
        arr1[i] = i;
        arr2[i] = i;
    }

    int *sum = sum_arr(arr1, arr2);

    print_arr(arr1);
    print_arr(arr2);
    print_arr(sum);

    
    return 0;
}
