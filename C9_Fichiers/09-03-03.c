#include <stdio.h>

/**
 * Exercice: Fichiers binaires - Lecture d'un fichier binaire
 * 
 * Instructions:
 * Écrire un programme qui importe le fichier binaire produit lors de l'exercice
 * précédent en mémoire puis affiche le contenu à l'écran dans un format spécifique.
 * 
 * Format d'affichage attendu:
 * [i] The stock contains 2 products:
 * [i] - row 0: [Federer],[raquette],[999.90],[10],[9999.00]
 * [i] - row 1: [Odermatt],[skis],[567.50],[20],[11350.00]
 */

#define MAXLEN 256
#define MAXSTOCK 80

// Définition de la structure pour stocker les articles (identique à l'exercice précédent)
struct stockItem {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
};

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s dbfile\n", argv[0]);
        return 1;
    }

    // Ouvrir le fichier binaire
    // Votre code ici
    
    // Charger la base de données en mémoire
    struct stockItem stock[MAXSTOCK] = { 0 };
    int n = 0;
    
    // Lire le nombre d'enregistrements au début du fichier
    // Votre code ici
    
    // Lire les enregistrements du fichier
    // Votre code ici
    
    // Afficher le contenu de la base de données
    // Votre code ici
    
    return 0;
}
