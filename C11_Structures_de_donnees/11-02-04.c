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
 * Ce fichier présente l'implémentation 4: Stockage de données génériques
 */

// Structure d'un maillon de la liste simplement chaînée avec données génériques
struct node {
    struct node *next;
    void *data;               // Pointeur vers des données génériques
};

// Structure de la file avec pointeur de fonction pour comparaison
struct queue {
    struct node *front;
    struct node *back; 
    int size;
    void (*free_data)(void*); // Fonction pour libérer les données
};

// Création d'une nouvelle file vide
void* new_queue_with_free_fn(void (*free_data)(void*)) {
    // Votre code ici: initialiser la structure avec la fonction de libération
    return NULL;
}

// Libération de la mémoire allouée pour la file et les données
void free_queue(void *_q) {
    // Votre code ici: libérer les données avec la fonction free_data
}

// Ajout d'un élément à la fin de la file
void push_in_queue(void *_q, void *data) {
    // Votre code ici: gérer l'insertion de données génériques
}

// Retrait de l'élément en tête de file
void pop_from_queue(void *_q) {
    // Votre code ici: gérer la suppression et libérer les données si nécessaire
}

// Consultation de l'élément en tête de file
void* front_of_queue(void *_q) {
    // Votre code ici
    return NULL;
}

// Consultation de l'élément en fin de file
void* back_of_queue(void *_q) {
    // Votre code ici
    return NULL;
}

// Obtention du nombre d'éléments dans la file
int size_of_queue(void *_q) {
    // Votre code ici
    return 0;
}

// Fonction exemple pour libérer un entier alloué dynamiquement
void free_int(void *data) {
    free(data);
}

// Programme de test
int main() {
    void* q = new_queue_with_free_fn(free_int);
    
    for(int i = 0; i < 10; ++i) {
        int *value = malloc(sizeof(int));
        *value = i*i;
        push_in_queue(q, value);
        
        if(i % 2 == 0) { 
            int *front = front_of_queue(q);
            printf("%d ", *front);
            pop_from_queue(q);
        }
    }
    
    printf("\n%d elements remain in queue\n", size_of_queue(q));
    
    if (size_of_queue(q) > 0) {
        int *front = front_of_queue(q);
        int *back = back_of_queue(q);
        printf("From %d to %d.\n", *front, *back);
    }
    
    free_queue(q);
    
    return 0;
}
