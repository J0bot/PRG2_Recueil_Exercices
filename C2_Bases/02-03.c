#include <stdio.h>
#define STR_SIZE 50

int main()
{
    char prenom[STR_SIZE] ;
    char nom[STR_SIZE] ;
    int age;
    int a = 1, b = 2, c = 3;
    printf("Bonjour\n");
    printf("Il a pas dit %s !!!\n", "bonjour");
    printf("Aujourd'hui il fait : %d degrés\n", 23);
    printf("Je compte avec : %d %d %d\n", a,b,c);
    printf("Prénom et nom : ");
    scanf("%50s %50s", prenom, nom);

    printf("Age : ");
    scanf("%d", &age);

    printf("Traitement...\n");
    printf("Prénom : %s\n", prenom);
    printf("Nom : %s\n", nom);
    printf("Age : %d\n", age);
    return 0;
}