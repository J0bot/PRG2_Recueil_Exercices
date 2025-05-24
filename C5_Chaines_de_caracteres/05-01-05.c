#include <stdio.h>
#include <string.h>

/**
 * Exercice: Dépassements de capacité
 * 
 * Instructions:
 * Compilez et exécutez ce programme pour répondre aux questions suivantes:
 * 
 * Question 1: Essayez de mettre le mot le plus long possible en entrée. 
 * Qu'observez-vous? À partir de quelle(s) taille(s)? Que se passe-t-il?
 * 
 * Question 2: En rentrant plusieurs mots de 4 caractères (2, 3, ... 40) 
 * qu'observez-vous? À partir de quelle(s) taille(s)? Que se passe-t-il?
 */

int moreTxt(char *list) {
    char str[5];  // <-- tableau de taille très limitée

    printf("> Ajouter un mot (exit = '0'): ");
    scanf("%s", str); // <-- entrée illimitée!!!

    if (str[0] == '0') return 0; // <-- 0 = arrêt
    printf("- Je note %s!\n", str);

    if (strlen(list) > 0) strcat(list, ",");
    strcat(list, str); // <-- extension illimitée!!!
    printf(". La liste contient maintenant: %s\n", list);
    return 1; // <-- 1 = continuer
}

void overW(const char *src, char *dst) {
    int i;

    for (i = 0; src[i] != '\0'; i++) dst[i] = src[i];
    dst[i] = '\0';
}

void overR(const char *src, int len) {
    int i;

    for (int i = 0; i < len; i++) printf("%c", src[i]);
    printf("\n");
}

int testOverRW() {
    // tableaux ci-dessous sont des tampons de taille limitée
    char sec4[20] = "C3C1 3ST UN S3CR3T";
    char sec3[20] = "CECI EST UN SECRET";
    char outs[20] = { 0 };
    char sec2[20] = "ceci est un secret";
    char inps[40] = "phrase par defaut";
    char sec1[20] = "ceci est un secret";
    int inpl = 0;

    while (1) {
        fflush(stdin); // <-- nécessaire pour vider les entrées précédentes
        printf("! phrase actuelle = '%s'\n", inps);
        printf("> voulez-vous la changer (no = '1', exit = '0')? ");
        scanf("%d", &inpl); // <-- entrée entière
        if (inpl == 0) return 0; // <-- 0 = arrêt
        if (inpl != 1) {
            printf("> Saisir une phrase a copier: ");
            fflush(stdin); // <-- encore une fois, besoin de vider les entrées
            fgets(inps, sizeof inps, stdin); // <-- entrée limitée!!!
            inps[strlen(inps) - 1] = '\0';   // <-- supprimer '\n'
        }
        printf(". La chaine a lire fait %d caracteres\n", strlen(inps));
        printf(". La chaine a ecrire attend %d caracteres\n", (sizeof outs / sizeof * outs) - 1);

        overW(inps, outs);  // <-- test d'écriture excessive
        printf(". La chaine ecrite contient: %s\n", outs);

        printf("> Saisis le nombre de lettres a afficher (exit = '0'): ");
        scanf("%d", &inpl);  // <-- entrée entière
        if (inpl == 0) return 0; // <-- 0 = arrêt

        overR(inps, inpl); // <-- test de lecture excessive
    }
    return 1; // <-- 1 = continuer
}

int main(void) {
    char str[16] = { 0 };  // <-- tableau de taille limitée

    while (moreTxt(str));
    printf("La liste finale contient: %s\n---\n\n", str);

    while (testOverRW());
    printf("Done!\n---\n\n");

    return 0;
}
