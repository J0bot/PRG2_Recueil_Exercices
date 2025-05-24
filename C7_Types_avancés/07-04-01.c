#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * Exercice: Alignement des structures
 * 
 * Instructions:
 * Concevez une structure en C pour représenter des données provenant d'un capteur,
 * qui doivent être stockées de manière contiguë en mémoire. Cette structure sera
 * utilisée dans un contexte où l'espace mémoire est limité et précieux.
 * 
 * Les données du capteur sont les suivantes:
 * - Identifiant du capteur (2 octets)
 * - Horodatage (estampillage) en secondes
 * - Type de capteur (1 byte)
 * - Valeur du capteur (4 octets)
 * 
 * Le programme devra allouer dynamiquement une zone mémoire contiguë réservée où
 * le capteur pourra venir écrire ces valeurs, puis implémenter une fonction d'affichage.
 * 
 * Faire un test dans la fonction main() avec les données suivantes:
 * - Identifiant du capteur: 12345
 * - Horodatage: 161803398
 * - Type de capteur: 2
 * - Valeur du capteur: 3.14159
 */

// Définition de la structure pour les données du capteur
// N'oubliez pas d'utiliser l'attribut packed pour assurer la contigüité
typedef struct {
    // Votre code ici
} SensorData;

// Fonction pour afficher les données du capteur
void displaySensorData(SensorData *data) {
    // Votre code ici
}

int main() {
    // Allocation dynamique de la mémoire pour les données du capteur
    // Initialisation des données du capteur
    // Affichage des données du capteur
    // Libération de la mémoire allouée
    // Votre code ici
    
    return 0;
}
