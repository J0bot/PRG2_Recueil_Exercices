#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/**
 * Exercice: Listes FIFO avec différentes implémentations
 * 
 * Instructions:
 * Modifiez la solution de l'exercice précédent (liste simplement chaînée)
 * pour implémenter une file d'attente (queue) selon les variations suivantes:
 * 
 * 1. Utilisez une liste doublement chaînée
 * 2. Utilisez un buffer circulaire
 * 3. Utilisez un buffer circulaire redimensionable
 * 4. Stockez des données génériques plutôt que des entiers
 * 
 * Ce fichier présente l'implémentation 1: Liste doublement chaînée
 */

// Structure d'un maillon de la liste doublement chaînée
struct node {
    struct node *prev; // Ajout d'un pointeur vers l'élément précédent
    struct node *next;
    int val;
};

// Structure de la file
struct queue {
    struct node *front;
    struct node *back; 
    int size;
};

// Création d'une nouvelle file vide
void* new_queue() {
    // Votre code ici
    return NULL;
}

// Libération de la mémoire allouée pour la file
void free_queue(void *_q) {
    // Votre code ici
}

// Ajout d'un élément à la fin de la file
void push_in_queue(void *_q, int i) {
    // Votre code ici - Utilisez les liens prev et next
}

// Retrait de l'élément en tête de file
void pop_from_queue(void *_q) {
    // Votre code ici - Utilisez les liens prev et next
}

// Consultation de l'élément en tête de file
int front_of_queue(void *_q) {
    // Votre code ici
    return 0;
}

// Consultation de l'élément en fin de file
int back_of_queue(void *_q) {
    // Votre code ici
    return 0;
}

// Obtention du nombre d'éléments dans la file
int size_of_queue(void *_q) {
    // Votre code ici
    return 0;
}

// Programme de test
int main() {
    void* q = new_queue();

    for(int i = 0; i < 10; ++i) {
        push_in_queue(q, i*i);
        if(i % 2 == 0) { 
            printf("%d ", front_of_queue(q));
            pop_from_queue(q);
        }
    }

    printf("\n%d elements remain in queue, from %d to %d.\n",
           size_of_queue(q),
           front_of_queue(q), 
           back_of_queue(q));

    free_queue(q);
    
    return 0;
}
