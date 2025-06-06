#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Exercice: Tableau redimensionable
 * 
 * Instructions:
 * Ecrivez un programme qui demande à l'utilisateur d'entrer des entiers jusqu'à ce qu'il
 * entre autre chose qu'un entier. A ce moment là, il sort de sa boucle et affiche tous
 * les entiers entrés.
 * 
 * Pour le réaliser, utilisez un tableau alloué dynamiquement dont vous doublez la capacité
 * avec `realloc` dès que le nombre d'éléments qui doivent y être stockés dépasse sa capacité
 * actuelle.
 * 
 * N'oubliez pas de tester si les allocations dynamiques ont fonctionné et de libérer la mémoire
 * en fin de programme.
 */

int main() {
    // Votre code ici
    int *nombres = malloc(sizeof(int));

    if(nombres==NULL)
    {
        printf("Erreur dans l'allocation de la mémoire");
        return EXIT_FAILURE;
    }
    int count = 0; 
    while(true)
    {
        int n;
        printf("Entrez un entier positif (une lettre pour finir): ");
        if(scanf("%d", &n)!= 1){
            break;
        }
        nombres[count++] = n;
        
        // j'aime bien realouer à chaque nombre :)
        nombres = realloc(nombres,(count+1) * sizeof(int)); 
    }

    printf("Vous avez entre: ");
    for(int i  = 0; i<count; i++){
        printf("%d ", nombres[i]);
    }
    printf("\n");

    free(nombres);
    return 0;
}
