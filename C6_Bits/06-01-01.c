#include <stdio.h>

/**
 * Exercice: Opérateur "OU" : Gestion de droits
 * 
 * Instructions:
 * Imaginons que chaque bit dans un octet représente un droit d'accès différent 
 * pour un fichier — lire, écrire, exécuter, etc.
 * 
 * En définissant un masque pour chaque action, on peut aisément combiner les 
 * droits d'accès à l'aide de l'opérateur OU.
 * 
 * Écrivez un programme en langage C qui réalise la gestion des droits d'accès 
 * d'un système de fichiers simple.
 */

// Définition des masques pour chaque droit d'accès
#define LIRE     0x01  // 00000001 en binaire
#define ECRIRE   0x02  // 00000010 en binaire
#define EXECUTER 0x04  // 00000100 en binaire

int main() {
    // Droits d'accès actuels: aucun droit accordé
    unsigned char droitsAcces = 0x00;
    
    // Votre code ici:
    // 1. Donnez à l'utilisateur certains droits en utilisant l'opérateur |=
    // 2. Affichez les droits actuels en hexadécimal
    // 3. Vérifiez quels droits sont accordés en utilisant l'opérateur &
    
    return 0;
}
