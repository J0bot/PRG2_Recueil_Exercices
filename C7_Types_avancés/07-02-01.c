#include <stdio.h>

/**
 * Exercice: Utilisation des enum - Statut du Joueur en Ligne
 * 
 * Instructions:
 * 1. Créer un enum appelé StatutJoueur avec des valeurs EN_LIGNE, HORS_LIGNE, 
 *    EN_JEU, et EN_PAUSE.
 * 
 * 2. Implémenter une fonction pour mettre à jour le statut du joueur.
 * 
 * 3. Écrire une fonction qui prend un StatutJoueur et affiche un message reflétant 
 *    l'état actuel du joueur, tel que "Le joueur est actuellement en jeu" 
 *    ou "Le joueur est hors ligne".
 */

// Définition de l'enum StatutJoueur
typedef enum {
    // Votre code ici
} StatutJoueur;

// Fonction pour afficher le statut actuel du joueur
void afficherStatut(StatutJoueur statut) {
    // Votre code ici
}

// Fonction pour changer le statut du joueur
void changerStatut(StatutJoueur *statut, StatutJoueur nouveauStatut) {
    // Votre code ici
}

int main() {
    // Tester les fonctions avec différents statuts
    // Votre code ici
    
    return 0;
}
