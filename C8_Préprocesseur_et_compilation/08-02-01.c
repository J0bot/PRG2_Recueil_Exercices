#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Exercice: Macros en C
 * 
 * Instructions:
 * Complétez le code en écrivant les macros suivantes (ces macros existent dans "ctype.h" 
 * sous d'autres noms bien sûr):
 * 
 * a) CHIFFRE(c) : teste si une variable c de type char contient un chiffre.
 * b) MINUSCULE(c) : teste si une variable c de type char contient une minuscule.
 * c) MAJUSCULE(c) : teste si une variable c de type char contient une majuscule.
 * d) MIN_MAJ(c) : convertit une variable c de type char en majuscule, si c'est une minuscule.
 * e) MAJ_MIN(c) : convertit une variable c de type char en minuscule, si c'est une majuscule.
 * f) PERMUTE(a,b) : permute les valeurs de deux variables entières a et b.
 * g) COPIE(s,t) : recopie une chaîne de caractères s dans une autre chaîne de caractères t
 *    (on suppose que les espaces mémoire où sont logées la chaîne et sa copie sont
 *    correctement réservés).
 */

/* Définition des macros */
// Votre code ici

int main() {
    char test_char = '5';
    char test_min_char = 'a';
    char test_maj_char = 'Z';
    int a = 10, b = 20;
    char lower_char = 't';
    char upper_char = 'K';
    char source[] = "Hello, world!";
    char destination[50];

    /* Teste si <test_char> est un chiffre */
    printf("Est-ce un chiffre ? %d\n", CHIFFRE(test_char));

    /* Teste si <test_min_char> est une minuscule */
    printf("Est-ce une minuscule ? %d\n", MINUSCULE(test_min_char));

    /* Teste si <test_maj_char> est une majuscule */
    printf("Est-ce une majuscule ? %d\n", MAJUSCULE(test_maj_char));

    /* Converti <lower_char> en majuscule SI minuscule */
    printf("En majuscule si minuscule : %c\n", MIN_MAJ(lower_char));

    /* Converti <upper_char> en minuscule SI majuscule */
    printf("En minuscule si majuscule : %c\n", MAJ_MIN(upper_char));

    printf("Avant permutation : a = %d, b = %d\n", a, b);
    
    PERMUTE(a, b);
    
    printf("Après permutation : a = %d, b = %d\n", a, b);

    /* Effectue une copie de source dans destination avec la macro COPIE */
    COPIE(source, destination);
    
    printf("Chaîne copiée : %s\n", destination);

    return 0;
}
