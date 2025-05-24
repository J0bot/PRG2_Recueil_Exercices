#include <stdio.h>

/**
 * Exercice: Fichiers binaires - Lecture de fichier texte
 * 
 * Instructions:
 * Ecrire un programme qui accepte un nom de fichier texte en argument et qui lit ce fichier
 * ligne par ligne pour en extraire le contenu. Le contenu lu est affiché ligne par ligne,
 * chaque élément séparé par des virgules, et les prix affichés au centime.
 * 
 * Format du fichier texte (exemple stock.txt):
 * Federer raquette 999.90 10 9999
 * Odermatt skis 567.50 20 11350
 * 
 * Exemple d'affichage attendu:
 * reading Federer,raquette,999.90,10,9999.00
 * reading Odermatt,skis,567.50,20,11350.00
 */

#define MAXLEN 256

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    // Ouvrir le fichier texte
    // Votre code ici
    
    // Lire et afficher le contenu
    char brand[MAXLEN], item[MAXLEN];
    float unit, total;
    int qty;
    
    // Votre code ici
    
    return 0;
}
