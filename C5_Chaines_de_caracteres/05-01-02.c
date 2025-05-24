#include <stdio.h>
#include <stdbool.h>

/**
 * Exercice: Vérification des parenthèses
 * 
 * Instructions:
 * Écrivez un programme qui lit une ligne et vérifie que chaque parenthèse ouvrante 
 * est bien refermée par la suite.
 * 
 * La lecture de la ligne est effectuée dans une fonction lire_ligne() qui lit les 
 * caractères un à un jusqu'au retour à la ligne ('\n') ou après avoir atteint la 
 * longueur de ligne maximale passée en paramètre. La fonction signale une éventuelle 
 * erreur lors de l'opération au code appelant.
 */

// Fonction de lecture d'une ligne de texte
bool lire_ligne(char *chaine, size_t max) {
    // Votre code ici
    return true;
}

int main(void) {
    char s[255];
    
    printf("Saisissez une ligne de mots et parentheses: ");
    
    if (!lire_ligne(s, sizeof s)) {
        printf("[!] Erreur lors de la saisie.\n");
        return -1;
    }
    
    // Vérification des parenthèses
    // Votre code ici
    
    return 0;
}
