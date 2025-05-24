#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/**
 * Exercice: Liste FIFO avec liste simplement chaînée
 * 
 * Instructions:
 * Implémentez une structure de file (queue) en utilisant une liste simplement chaînée.
 * La structure doit avoir des pointeurs vers le premier et le dernier maillon.
 * 
 * Fonctions à implémenter:
 * - new_queue(): Créer une nouvelle file vide
 * - free_queue(): Libérer la mémoire allouée pour la file
 * - push_in_queue(): Ajouter un élément à la fin de la file (push_back)
 * - pop_from_queue(): Retirer l'élément en tête de file (pop_front)
 * - front_of_queue(): Consulter l'élément en tête de file
 * - back_of_queue(): Consulter l'élément en fin de file
 * - size_of_queue(): Obtenir le nombre d'éléments dans la file
 */

// Structure d'un maillon de la liste
struct node {
    // Votre code ici
};

// Structure de la file
struct queue {
    // Votre code ici
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
    // Votre code ici
}

// Retrait de l'élément en tête de file
void pop_from_queue(void *_q) {
    // Votre code ici
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
