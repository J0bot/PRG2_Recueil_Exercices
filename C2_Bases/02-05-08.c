#include <stdio.h>

int main()
{
    int age = 0;

    while(age<18)
    {
        printf("Entrez votre âge: ");
        scanf("%d", &age);
    }

    printf("Accès accordé\n");
    return 0;
}