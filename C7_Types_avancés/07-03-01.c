#include <stdio.h>
#include <time.h>

/**
 * Exercice: Utilisation des unions - Lecteur de données de capteurs
 * 
 * Instructions:
 * 1. Définir une union appelée DonneesCapteur qui peut stocker la température (float),
 *    l'humidité (float), ou l'occupation (int).
 * 
 * 2. Inclure cette union dans une struct avec un enum TypeDeCapteur 
 *    (TEMPERATURE, HUMIDITE, OCCUPATION) et un horodatage.
 * 
 * 3. Écrire une fonction pour imprimer les données du capteur en fonction de son type.
 */

// Définition de l'enum TypeDeCapteur
typedef enum {
    // Votre code ici
} TypeDeCapteur;

// Définition de l'union DonneesCapteur
typedef union {
    // Votre code ici
} DonneesCapteur;

// Définition de la structure Capteur
typedef struct {
    // Votre code ici
} Capteur;

// Fonction pour imprimer les données du capteur
void imprimerDonnees(Capteur capteur) {
    // Votre code ici
}

int main() {
    // Créer et initialiser un capteur
    // Afficher ses données
    // Votre code ici
    
    return 0;
}
