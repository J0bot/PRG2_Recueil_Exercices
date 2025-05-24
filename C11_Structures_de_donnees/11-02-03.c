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
 * Ce fichier présente l'implémentation 3: Buffer circulaire redimensionable
 */

#define INITIAL_CAPACITY 4

// Structure de la file avec buffer circulaire redimensionable
struct queue {
    int *buffer;              // Tableau dynamique pour stocker les éléments
    int capacity;             // Capacité actuelle du buffer
    int front;                // Index du premier élément
    int back;                 // Index du dernier élément
    int size;                 // Nombre d'éléments dans la file
};

// Création d'une nouvelle file vide
void* new_queue() {
    // Votre code ici: initialiser la structure avec un buffer circulaire redimensionable
    // Allouer un buffer initial de taille INITIAL_CAPACITY
    return NULL;
}

// Libération de la mémoire allouée pour la file
void free_queue(void *_q) {
    // Votre code ici: libérer le buffer et la structure
}

// Fonction pour redimensionner le buffer si nécessaire
void resize_buffer_if_needed(struct queue *q) {
    // Votre code ici: redimensionner le buffer si nécessaire
    // Doubler la taille du buffer quand il est plein
}

// Ajout d'un élément à la fin de la file
void push_in_queue(void *_q, int i) {
    // Votre code ici: gérer l'insertion dans le buffer circulaire
    // Redimensionner le buffer si nécessaire
}

// Retrait de l'élément en tête de file
void pop_from_queue(void *_q) {
    // Votre code ici: gérer la suppression dans le buffer circulaire
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
