#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Exercice: Itérateur sur une pile de fonctions
 * 
 * Instructions:
 * a) Implémentez les fonctions push(), pop(), top() et empty() pour la gestion
 *    d'une pile de pointeurs sur fonction.
 * 
 * b) Modifiez les fonctions func_register() et do_work() afin de gérer la collection
 *    de fonctions à l'aide d'une pile de fonctions. Une fois la fonction exécutée,
 *    elle sera ôtée de la collection.
 */

typedef void (*fn_t)(void *);

typedef struct {
    fn_t fn;
    void *args;
} entry_t;

typedef struct Node {
    struct Node *next;
    entry_t entry;
} Node;

typedef Node task_collection_t;

// a) Implémentez les fonctions pour la gestion de la pile

// Fonction pour ajouter un élément au sommet de la pile
void push(Node **topNode, entry_t entry) {
    // Votre code ici
}

// Fonction pour retirer l'élément au sommet de la pile
void pop(Node **topNode) {
    // Votre code ici
}

// Fonction pour consulter l'élément au sommet de la pile
entry_t top(Node *topNode) {
    // Votre code ici
    entry_t empty_entry = {NULL, NULL};
    return empty_entry;
}

// Fonction pour vérifier si la pile est vide
bool empty(Node *topNode) {
    // Votre code ici
    return true;
}

// b) Modifiez les fonctions pour gérer la collection avec une pile

// Fonction pour enregistrer une tâche dans la collection
void func_register(task_collection_t **task_collection, fn_t fn, void *args) {
    // Votre code ici: utilisez push()
}

// Fonction pour exécuter toutes les tâches de la collection
void do_work(task_collection_t **task_collection) {
    // Votre code ici: utilisez top(), pop() et empty()
}

// Exemple de tâches
void task_A(void *args) {
    printf("Execution of task A\n");
}

void task_B(void *args) {
    printf("Execution of task B with args: %s\n", (char *) args);
}

int main() {
    task_collection_t *task_collection = NULL;

    // Enregistrer les tâches
    func_register(&task_collection, task_A, NULL);
    func_register(&task_collection, task_B, "Hello");

    // Exécuter les tâches
    do_work(&task_collection);

    return 0;
}
