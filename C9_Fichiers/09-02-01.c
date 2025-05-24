#include <stdio.h>
#include <stdbool.h>

/**
 * Exercice: Comptage dans un fichier texte
 * 
 * Instructions:
 * 1. Écrire la fonction countc() qui renvoie le nombre de caractères contenus 
 *    dans le flux de texte passé en argument à la fonction.
 * 2. Écrire la fonction countm() qui renvoie le nombre de mots dans le flux 
 *    passé en argument (les mots sont séparés par des espaces ou des retours à la ligne).
 * 3. Écrire la fonction countl() qui renvoie le nombre de lignes dans le flux 
 *    passé en argument.
 * 4. Compléter le main() pour ouvrir le fichier texte passé en argument à la commande.
 */

// Fonction pour compter les caractères
int countc(FILE *f) {
    // Votre code ici
    return 0;
}

// Fonction pour compter les mots
int countm(FILE *f) {
    // Votre code ici
    return 0;
}

// Fonction pour compter les lignes
int countl(FILE *f) {
    // Votre code ici
    return 0;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    FILE *fin;

    // Ouvrir le fichier
    // Votre code ici

    // Compter les caractères
    printf("%s contains %d characters\n", argv[1], countc(fin));

    // Remettre le curseur au début du fichier et compter les mots
    // Votre code ici
    printf("%s contains %d words\n", argv[1], countm(fin));

    // Remettre le curseur au début du fichier et compter les lignes
    // Votre code ici
    printf("%s contains %d lines\n", argv[1], countl(fin));

    fclose(fin);
    return 0;
}
