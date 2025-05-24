#include <stdio.h>

/**
 * Exercice: Utilisation de typeof
 * 
 * Instructions:
 * Écrivez un programme en C qui définit une macro calculate_average() pour 
 * calculer la moyenne de plusieurs tableaux de différents types.
 * 
 * Vous devez ensuite créer au moins trois tableaux de types différents 
 * (par exemple, int, float, et double) et chaque tableau doit contenir au moins 5 éléments.
 */

// Définition de la macro calculate_average pour calculer la moyenne d'un tableau
// Utilisez typeof pour que la macro fonctionne avec différents types de données
// Votre code ici: définir la macro calculate_average

int main() {
    // Création de tableaux de différents types
    int int_array[] = {4, 8, 15, 16, 23};
    float float_array[] = {3.14, 2.71, 1.41, 1.73, 2.58};
    double double_array[] = {6.022, 9.81, 3.1415, 2.7182, 1.4142};
    
    // Variables pour stocker les moyennes calculées
    int int_average;
    float float_average;
    double double_average;
    int array_size;
    
    // Calcul et affichage de la moyenne du tableau d'entiers
    // Votre code ici
    
    // Calcul et affichage de la moyenne du tableau de flottants
    // Votre code ici
    
    // Calcul et affichage de la moyenne du tableau de doubles
    // Votre code ici
    
    return 0;
}
