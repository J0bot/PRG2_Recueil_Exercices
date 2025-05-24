#include <stdio.h>

/**
 * Exercice: Fichiers binaires - Importation vers un fichier binaire
 * 
 * Instructions:
 * Compléter le programme pour qu'il importe le contenu lu dans des enregistrements 
 * en mémoire puis sauvegarde ces derniers dans un fichier binaire qui fera office 
 * de base de données.
 * 
 * Le contenu est chargé en mémoire dans un tableau de structures stockItem.
 * Le fichier binaire produit contient tous les enregistrements présents en mémoire
 * ainsi que le nombre de ces enregistrements au début du fichier.
 */

#define MAXLEN 256
#define MAXSTOCK 80

// Définition de la structure pour stocker les articles
struct stockItem {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
};

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s importfile dbfile\n", argv[0]);
        return 1;
    }

    // Ouvrir le fichier texte d'importation
    // Votre code ici
    
    // Importer les données dans un tableau de structures
    struct stockItem stock[MAXSTOCK] = { 0 };
    int i = 0;
    
    // Votre code ici pour la lecture des données
    
    // Créer/écraser le fichier binaire de base de données
    // Votre code ici
    
    // Écrire le nombre d'enregistrements au début du fichier
    // Votre code ici
    
    // Écrire les enregistrements dans le fichier
    // Votre code ici
    
    return 0;
}
