#include <CUnit/CUCurses.h>
#include <CUnit/CUnit.h>
#include <math.h>

/**
 * Exercice: Tests unitaires avec CUnit
 * 
 * Instructions:
 * Proposez une implémentation de tests unitaires afin de valider le bon fonctionnement
 * de la calculatrice. Faites un test pour chaque opération (addition, soustraction,
 * multiplication, division, puissance).
 * 
 * Prérequis:
 * Installation de CUnit: sudo apt install libcunit1-ncurses-dev
 * 
 * Compilation:
 * gcc -o tests_calculatrice 10-01-01.c -lcunit -lm
 */

// Fonction à tester - Calculatrice en nombres entiers
int calculer(int nombre1, int nombre2, char operateur) {
    switch (operateur) {
    case '+':
        return nombre1 + nombre2;

    case '-':
        return nombre1 - nombre2;

    case '*':
        return nombre1 * nombre2;

    case '/':
        if (nombre2 == 0) {
            // Gérer l'erreur de division par zéro
            return -1;
        } else {
            return nombre1 / nombre2;
        }

    case '^':
        // Puissance implémentée avec pow()
        return (int) pow((double) nombre1, (double) nombre2);

    default:
        // Gérer l'opérateur invalide
        return -1;
    }
}

// Fonctions de test
// Votre code ici: écrire les fonctions de test pour chaque opération

int main() {
    // Initialisation de CUnit
    // Votre code ici: initialiser CUnit, ajouter les tests et les exécuter
    
    return 0;
}
