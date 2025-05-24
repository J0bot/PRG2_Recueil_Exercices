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

// Fonction à compléter pour lire un entier positif
size_t lire_size_t(const char *message) {
    // Votre code ici
    return 0;
}

int main() {
    size_t lignes;
    size_t colonnes;
    int **tab;

    // 1. Demander à l'utilisateur le nombre de lignes et de colonnes
    // Votre code ici
    
    // 2. Allouer le tableau de tableaux
    // Votre code ici
    
    // 3. Allouer les tableaux pour chaque ligne
    // Votre code ici
    
    // 4. Remplir avec les valeurs de la table de multiplication
    // Votre code ici
    
    // 5. Afficher la table
    // Votre code ici
    
    // 6. Libérer la mémoire (attention aux fuites mémoire!)
    // Votre code ici
    
    return 0;
}
