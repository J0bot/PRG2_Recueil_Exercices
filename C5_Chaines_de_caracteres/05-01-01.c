#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Exercice: Palindrome
 * 
 * Instructions:
 * Un palindrome est un texte identique lorsqu'il est lu de gauche à droite et de droite à gauche.
 * Écrivez un programme qui vérifie si un mot donné est un palindrome sans tenir compte des majuscules.
 * 
 * Exemples:
 * - "Radar" est un palindrome
 * - "baobab" n'est pas un palindrome
 */

// Fonction à compléter pour tester si une chaîne est un palindrome
bool palindrome(char *s) {
    // Votre code ici

    int len = 0;
    while(s[len]!='\0') { len++;}

    for(int i = 0 ; i<len; i++){
        if (s[i] != s[len -1 -i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100], upstr[100];
    
    // Saisie du mot à tester
    printf("[?] Saisir un mot (que des lettres dans [a-z,A-Z]): ");
    scanf("%99s", str);
    
    // Conversion en majuscules et test du palindrome
    // Votre code ici

    for(int i = 0; i<99; i++){
        upstr[i] = toupper(str[i]);
    }

    printf("[i] %s %s un palindrome\n", upstr , palindrome(upstr)==true ? "est" : "n'est pas");

    return 0;
}
