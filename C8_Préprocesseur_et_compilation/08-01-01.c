#include <stdbool.h>
#include <stdio.h>

/**
 * Exercice: Directives de préprocesseur - Configuration et compilation conditionnelle
 * 
 * Instructions:
 * Instrumentez le code avec les bonnes directives afin de satisfaire les exigences
 * décrites en commentaire.
 */

// Une certaine configuration 
#define CONFIG_VERSION 23
#define CONFIG_STACK_PROTECTION
//#define CONFIG_OS_WIN     
#define CONFIG_OS_LINUX     

// La structure doit avoir tous les membres alignés sur 16 octets
// Ajoutez ici la directive appropriée

typedef struct {
    // Le champ suivant, uniquement pour une config WIN avec la version étant égale à 23
    // Les conditions doivent être exprimées en une seule ligne
    // Ajoutez ici la directive appropriée
    unsigned int addr;

    // Et celui-ci, uniquement pour une config Linux
    // Ajoutez ici la directive appropriée
    unsigned long addrl;

    // Si ni Linux, ni WIN, afficher une erreur de compilation.
    // Ajoutez ici la directive appropriée

    // Autres champs présents dans tous les cas
    unsigned long size;
    bool valid;
} mem_desc_t;

// Restaurer l'alignement par défaut
// Ajoutez ici la directive appropriée

// Uniquement si CONFIG_STACK_PROTECTION
// Ajoutez ici la directive appropriée
void stack_validate(void) {
    printf("Stack validation\n");
}

int main() {
    /* ... */
    printf("Size of mem_desc: %lu\n", sizeof(mem_desc_t));
    
    // Appeler stack_validate() uniquement si CONFIG_STACK_PROTECTION est défini
    // Ajoutez ici la directive appropriée
    stack_validate();
                                                                       
    /* ... */
    return 0;
}
