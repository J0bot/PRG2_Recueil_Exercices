#include <stdio.h>

/**
 * Exercice: Macros avancées en C
 * 
 * Instructions:
 * 1. Analyser ce que fait la macro DEFINE_TAB présentée ci-dessous
 * 2. Coder un exemple d'utilisation de cette macro pour des entiers et des chaînes
 *    de caractères
 */

// Définition de la macro DEFINE_TAB
#define DEFINE_TAB(name, type)                                                 \
                                                                               \
        struct name##_item {                                                   \
                int pos;                                                       \
                type val;                                                      \
        };                                                                     \
                                                                               \
        struct name##_item tab_##name[10];                                     \
                                                                               \
        static inline type get_##name##_val(int pos) {                         \
                return tab_##name[pos].val;                                    \
        }

// Votre code ici: utilisez la macro DEFINE_TAB pour créer un tableau d'entiers 
// et un tableau de chaînes de caractères

int main() {
    // Votre code ici: initialisez et utilisez les tableaux créés avec la macro
    
    return 0;
}
