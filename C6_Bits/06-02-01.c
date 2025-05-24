#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Pour usleep

/**
 * Exercice: Simulation d'une Guirlande de Noël Clignotante
 * 
 * Instructions:
 * Écrire un programme en C qui simule l'affichage d'une guirlande de Noël clignotante
 * à l'aide de caractères sur la console. Le programme doit utiliser les opérations binaires.
 * 
 * Votre programme doit simuler un affichage de guirlande de Noël composée de 8 lumières
 * sur une seule ligne. Chaque lumière peut être dans l'un des deux états suivants :
 * allumée (*) ou éteinte (-).
 * 
 * - Au démarrage du programme, les lumières de la guirlande doivent être initialisées
 *   avec une alternance des lumières allumées et éteintes, soit *-*-*-*-.
 * 
 * - Ensuite, le programme doit faire clignoter TOUTES les lumières de la guirlande
 *   CLIGNOTEMENTS fois.
 * 
 * - Entre chaque itération de clignotement, introduisez un délai d'attente aléatoire
 *   compris entre 0.1 et 1 seconde.
 */

#define CLIGNOTEMENTS 20

// Fonction pour afficher l'état des LEDs
void afficherLEDs(unsigned char leds) {
    // Votre code ici
}

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    
    // Initialisation des LEDs avec *-*-*-*-
    unsigned char leds = 0;
    
    // Votre code ici:
    // 1. Initialiser les LEDs dans la configuration de départ
    // 2. Faire clignoter les LEDs CLIGNOTEMENTS fois
    // 3. Introduire un délai aléatoire entre chaque clignotement
    
    return 0;
}
