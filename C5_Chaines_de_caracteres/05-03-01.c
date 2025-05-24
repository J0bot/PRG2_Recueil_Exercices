#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Exercice: Opérations sur les buffers
 * 
 * Instructions:
 * Compléter le programme qui, dans un premier temps, invoque la fonction moreTxt()
 * pour initialiser itérativement une liste de mots dans une structure mémoire allouée
 * dynamiquement au fur et à mesure que l'utilisateur les rentre sur stdin.
 * Dans un deuxième temps, le programme invoque la fonction makePhrase() qui alloue
 * dynamiquement un buffer pour une chaîne de caractères unique composée de tous
 * les mots rentrés séparés par un espace.
 * 
 * Les buffers alloués sont dimensionnés au strict minimum nécessaire.
 * L'espace pour la liste de mots est allouée de manière incrémentale en utilisant
 * la fonction realloc() chaque fois qu'un mot est ajouté.
 * La phrase est construite à partir de la liste de mots en utilisant la fonction memcpy().
 */

// Fonction pour demander un nouveau mot et l'ajouter à la liste
int moreTxt(char ***ptrList) {
    // Votre code ici
    return 0;
}

// Fonction pour construire une phrase à partir d'une liste de mots
int makePhrase(char **ptrPhrase, char **list) {
    // Votre code ici
    return 0;
}

int main(void) {
    char **list = NULL;    // <-- liste de mots
    char *phrase = NULL;   // <-- "phrase" résultante
    int count = 0;         // <-- nombre de mots dans la liste

    // Lecture des mots
    while (moreTxt(&list)) ++count;
    printf("[i] La liste finale contient %d mots\n", count);

    // Création de la phrase
    if (count > 0) {
       if (makePhrase(&phrase, list))
           printf("[i] Ce qui donne la phrase \"%s\"\n", phrase);
    }

    return 0;
}
