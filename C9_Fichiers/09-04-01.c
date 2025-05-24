#include <stdio.h>
#include <stdlib.h>

/**
 * Exercice: Fichiers et buffers
 * 
 * Instructions:
 * Ce programme démontre l'effet du buffering sur stdout. Testez-le avec différents
 * paramètres pour observer le comportement du buffering sous différents systèmes
 * d'exploitation.
 * 
 * Appel: 
 * ./bufferedPrint <nb chars in buffer for display> <when fflush should be invoked>
 * 
 * Paramètres:
 * - nb chars in buffer: taille du buffer en caractères
 * - when fflush should be invoked:
 *   - 0 => jamais (never)
 *   - 1 => seulement après toutes les entrées (at end)
 *   - >1 => à chaque fois (always)
 * 
 * Questions à répondre après exécution:
 * 1. Expliquez le comportement observé avec le mécanisme de buffering par bloc
 * 2. Quelle différence observe-t-on entre Windows et Linux? Quel rôle jouent les OS?
 * 3. Quelle "bizarrerie" peut-on observer dans l'affichage sous Linux et comment l'expliquer?
 */

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <buffer size = nb chars> <nb flushes = 0 (never), 1 (at end) or more (always)>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int bufsiz = atoi(argv[1]), nflush = atoi(argv[2]);
    printf("buffer size = %d characters\n", bufsiz);
    printf("flush %s\n", (nflush > 1) ? "always" : (nflush > 0) ? "at the end" : "never");

    // Selon https://en.cppreference.com/w/c/io/setvbuf
    // Définit le mode FULL BUFFERING avec une longueur fixe
    setvbuf(stdout, (char *)NULL, _IOFBF, bufsiz);

    float number1, number2, number3;
    float average;

    printf("Enter the first number: ");
    if (nflush > 1) fflush(stdout);
    scanf("%f", &number1);
    
    printf("Enter the second number: ");
    if (nflush > 1) fflush(stdout);
    scanf("%f", &number2);
    
    printf("Enter the third number: ");
    if (nflush > 0) fflush(stdout);
    scanf("%f", &number3);

    average = (number1 + number2 + number3) / 3;

    printf("\nAverage is : %f\n", average);

    return 0;
}
