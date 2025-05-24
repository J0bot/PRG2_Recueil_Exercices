#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Exercice: Opérations sur les chaînes
 * 
 * Instructions:
 * Remplacer la fonction insChar() de l'exercice sur les conversions par une fonction
 * insertStr() qui insère toute une chaîne de caractères au lieu d'un caractère unique.
 * 
 * Contrairement à insChar(), insertStr() doit être implémentée en utilisant les fonctions
 * de manipulation des chaînes de caractères définies dans le header string.h.
 */

// Fonction à compléter pour insérer une chaîne dans une autre à une position donnée
int insertStr(char *str, int len, const char *ins, int pos) {
    // Votre code ici
    return 0;
}

int main() {
    char test[100] = "Ceci est un test";
    char insertion[] = " simple";
    int pos = 15; // Position après "test"
    
    printf("Chaîne originale: %s\n", test);
    
    if (insertStr(test, sizeof(test), insertion, pos) == 0) {
        printf("Chaîne après insertion: %s\n", test);
    } else {
        printf("Erreur lors de l'insertion\n");
    }
    
    return 0;
}
