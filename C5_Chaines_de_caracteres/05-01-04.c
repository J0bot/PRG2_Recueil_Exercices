#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <errno.h>

/**
 * Exercice: Conversions de et vers des chaînes de caractères
 * 
 * Instructions:
 * Écrire un programme qui demande deux entiers en arguments, les multiplie l'un par l'autre
 * puis affiche le résultat formatté après l'avoir converti et stocké dans une chaîne
 * de caractères de longueur minimale et allouée dynamiquement.
 * 
 * Le programme vérifie que:
 * 1) Les arguments sont des entiers avec une fonction à créer isInteger()
 * 2) Chaque argument tient dans un long long lors de la conversion avec strtoll()
 * 3) La multiplication des arguments tient dans un long long
 * 
 * Le programme affiche:
 * 1) Les erreurs, notamment lors des vérifications ci-avant
 * 2) La taille nécessaire pour la chaîne résultat formattée
 * 3) La chaîne résultat formattée avec des séparateurs de milliers
 * 
 * Le programme ne fait pas appel aux fonctions déclarées dans string.h.
 */

// Fonction pour vérifier si une chaîne contient un entier
bool isInteger(const char *str) {
    // Votre code ici
    return false;
}

// Fonction pour insérer un caractère dans une chaîne à une position donnée
int insChar(char *str, int len, char c, int pos) {
    // Votre code ici
    return 0;
}

int main(int argc, char *argv[]) {
    // Vérification des arguments
    // Votre code ici
    
    // Conversion des arguments en entiers
    // Votre code ici
    
    // Calcul et vérification du résultat de la multiplication
    // Votre code ici
    
    // Calcul de la longueur nécessaire pour stocker le résultat
    // Votre code ici
    
    // Allocation de la mémoire et conversion du résultat en chaîne
    // Votre code ici
    
    // Formatage du résultat avec des séparateurs de milliers
    // Votre code ici
    
    return 0;
}
