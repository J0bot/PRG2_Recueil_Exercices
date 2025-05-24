#include <stdio.h>

/**
 * Exercice: Calculatrice avec pointeurs de fonction
 * 
 * Instructions:
 * a) Déclarez un tableau de pointeurs de fonctions qui peut pointer vers les fonctions
 *    d'opérations arithmétiques définies (addition, soustraction, multiplication, division).
 * 
 * b) Implémentez un programme principal qui permet à l'utilisateur de choisir une opération
 *    et de saisir deux nombres. Utilisez le tableau de pointeurs de fonctions pour appeler
 *    la fonction appropriée.
 */

// Définitions des fonctions pour les opérations arithmétiques
int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erreur : division par zéro\n");
        return 0;
    }
}

// Déclaration du tableau de pointeurs de fonctions
// Votre code ici

int main() {
    int choix;
    int a, b, resultat;
    
    // Affichage du menu et demande du choix de l'utilisateur
    // Votre code ici
    
    // Vérification de la validité du choix
    // Votre code ici
    
    // Demande des deux nombres
    // Votre code ici
    
    // Appel de la fonction appropriée via le tableau de pointeurs de fonctions
    // Votre code ici
    
    // Affichage du résultat
    // Votre code ici
    
    return 0;
}
