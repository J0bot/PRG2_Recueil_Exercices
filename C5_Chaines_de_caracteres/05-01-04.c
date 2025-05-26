#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <errno.h>

/**
 * Exercice: Conversions de et vers des chaînes de caractères
 * 
 * Instructions:
 * Écrire un programme qui demande deux entiers en arguments, les multiplie l'un par l'autre
 * puis affiche le résultat formatté après l'avoir converti et stocké dans une chaîne
 * de caractères de longueur minimale et allouée dynamiquement.
 * 
 * Le programme vérifie que:
 * 1) Les arguments sont des entiers avec une fonction à créer isInteger()
 * 2) Chaque argument tient dans un long long lors de la conversion avec strtoll()
 * 3) La multiplication des arguments tient dans un long long
 * 
 * Le programme affiche:
 * 1) Les erreurs, notamment lors des vérifications ci-avant
 * 2) La taille nécessaire pour la chaîne résultat formattée
 * 3) La chaîne résultat formattée avec des séparateurs de milliers
 * 
 * Le programme ne fait pas appel aux fonctions déclarées dans string.h.
 */

// Fonction pour vérifier si une chaîne contient un entier
bool isInteger(const char *str) {
    // Votre code ici
    int len = 0;

    if(str[len]=='-' || str[len]=='+')
    {
        len++;
    }

    if(str[len]=='\0'){
        return false;
    }

    while(str[len]!='\0'){
        
        if(str[len]<48 || str[len] > 57){
            return false;
        }
        len ++;
    }

    return true;
}

bool isTooLong(const char *str){
    errno = 0;
    strtoll(str, NULL, 10);
    if(errno==ERANGE)
    {
        return true;
    }
    return false;
}

// Fonction pour insérer un caractère dans une chaîne à une position donnée
int insChar(char *str, int len, char c, int pos) {
    // Votre code ici
    if(pos<0 || pos>len){ return -1;}

    for(int i = len; i>pos; i--)
    {
        
        str[i] = str[i-1];
    }
    str[pos] = c;
    return 0;
}

int main(int argc, char *argv[]) {
    // Vérification des arguments
    // Votre code ici

    if(argc!=3)
    {
        printf("Usage: 05-01-convert <integer 1> <integer 2>\n");
        return EXIT_FAILURE;
    }

    // Conversion des arguments en entiers
    // Votre code ici

    

    for(int i = 1; i<3; i++){
        if(!isInteger(argv[i]))
        {
            printf("[e] %s is not an integer!\n", argv[i]);
            return EXIT_FAILURE;
        }
        if(isTooLong(argv[i]))
        {
            printf("[e] %s is too long!\n", argv[i]);
            return EXIT_FAILURE;
        }

    }

    long long a = strtoll(argv[1], NULL, 10);
    long long b = strtoll(argv[2], NULL, 10);
    long long result = a*b;
    
    if (a!=0 && (result / a!=b)){
        printf("[e] %s * %s is too long!\n", argv[1], argv[2]);
        return EXIT_FAILURE;
    }

    char *output;
    sprintf(output, "%lli", result);
    int len = 0;
    while(output[len]!='\0'){len++;}
    len += (len-1)/3 ;

    printf("[i] %d characters needed to store %s\n", len, output);

    char *final = malloc(len * sizeof(char));

    if(final==NULL) { printf("[e] Erreur d'allocation de mémoire\n"); return -1;}

    sprintf(final, "%lli", result);
    
    for(int i = len; i>0; i--)
    {
        if(len<4){break;}
        if((len -i)%3==0 ){ 
            insChar(final, len, '\'', i);
        }
    }

    printf("[i] Result = %s\n", final);


    free(final);

    
    return 0;
}
