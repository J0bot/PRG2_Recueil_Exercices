#include <stdio.h>

/**
 * Exercice: Extraction de sous-chaîne
 * 
 * Instructions:
 * Écrire un programme qui demande une ligne de mots et en extrait puis affiche 
 * une sous-chaîne.
 * 
 * Le programme doit:
 * - Valider les positions et longueurs entrées par l'utilisateur sans avoir recours à string.h
 * - Refuser de traiter les lignes vides
 * - Utiliser la fonction fgets() pour la lecture de la ligne
 */

int main() {
    char str[100], sstr[100]; // Chaîne d'entrée et sous-chaîne extraite
    int pos = -1, l = 0, ll = 0, c = 0; // Position, longueurs de la chaîne et de la sous-chaîne, compteur
    
    // Obtenir une chaîne depuis l'entrée standard
    printf("[?] Saisissez une ligne de mots: ");
    
    // Votre code ici pour:
    // 1. Lire la ligne avec fgets()
    // 2. Calculer la longueur de la chaîne sans string.h
    // 3. Vérifier que la ligne n'est pas vide
    // 4. Demander et valider la position de départ
    // 5. Demander et valider la longueur de la sous-chaîne
    // 6. Extraire et afficher la sous-chaîne
    
    return 0;
}
