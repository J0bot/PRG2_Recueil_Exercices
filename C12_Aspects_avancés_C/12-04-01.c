#include <stdio.h>

/**
 * Exercice: Utilisation de _Generic
 * 
 * Instructions:
 * Écrivez une fonction qui initialise une structure de données polymorphique nommée Value.
 * Cette structure peut stocker des valeurs de différents types : entiers, flottants et chaînes de caractères.
 * Utilisez la construction _Generic pour créer une macro qui sélectionne la bonne fonction d'initialisation
 * en fonction du type de la valeur passée en paramètre.
 */

// Définition des constantes pour les types
#define TYPE_INT 0
#define TYPE_FLOAT 1
#define TYPE_STRING 2

// Structure Value polymorphique
struct Value {
    int type;
    union {
        int int_value;
        float float_value;
        char *string_value;
    } data;
};

// Fonctions d'initialisation spécifiques à chaque type
struct Value make_int_value(int value) {
    // Votre code ici
    struct Value v;
    return v;
}

struct Value make_float_value(float value) {
    // Votre code ici
    struct Value v;
    return v;
}

struct Value make_string_value(char *value) {
    // Votre code ici
    struct Value v;
    return v;
}

// Macro make_value utilisant _Generic
// Votre code ici: définir la macro make_value

// Fonction pour afficher la valeur stockée dans la structure
void print_value(struct Value value) {
    switch (value.type) {
        case TYPE_INT:
            printf("Integer: %d\n", value.data.int_value);
            break;
        case TYPE_FLOAT:
            printf("Float: %.2f\n", value.data.float_value);
            break;
        case TYPE_STRING:
            printf("String: %s\n", value.data.string_value);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main() {
    // Test de la macro make_value avec différents types
    // Décommentez ces lignes une fois votre macro définie
    // struct Value int_val = make_value(10);
    // struct Value float_val = make_value(3.14f);
    // struct Value string_val = make_value("Hello, world!");
    
    // Affichage des valeurs
    // print_value(int_val);
    // print_value(float_val);
    // print_value(string_val);
    
    return 0;
}
