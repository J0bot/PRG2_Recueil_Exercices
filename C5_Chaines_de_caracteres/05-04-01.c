#include <stdio.h>  // --> printf()
#include <getopt.h> // --> getopt()
#include <string.h> // --> strncat()

/**
 * Exercice: Arguments de main
 * 
 * Instructions:
 * Écrivez un programme my_cmd qui applique la fonction getopt() pour analyser la ligne de commande
 * et afficher le détail de ce qu'elle contient:
 * - Les options reconnues et l'éventuel argument lié 
 * - Les options qui ne sont pas admises
 * - Les arguments d'option manquants 
 * - Les arguments de commande
 * 
 * Le programme doit reconnaître les options suivantes:
 * - a: option qui nécessite un argument
 * - b: option qui nécessite un argument
 * - X: option sans argument
 * 
 * NB: 
 * - Le programme ne doit pas s'arrêter en cas d'erreur. Il affiche le message signalant
 *   l'erreur et traite l'élément suivant de la ligne de commande (dans l'ordre de getopt()).
 * - La fonction getopt() attend les options avant les arguments de commande. Il faut donc
 *   traiter manuellement les cas où des arguments de commande apparaissent avant ou entre
 *   les options.
 */

int main(int argc, char *argv[]) {
    int opt;
    char cmdargs[512] = "";  // Pour conserver les arguments de commande avant ou entre les options

    // Votre code ici
    // Utiliser getopt() pour analyser les options et arguments
    
    return 0;
}
