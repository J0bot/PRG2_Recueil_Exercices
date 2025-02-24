#include <stdio.h>

void exo1();
int exo2();

int main()
{
    exo1();
    printf("\nExo 2 : \n");
    printf("Le maximum est : %d", exo2());
    return 0;
}

int exo2()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(b>a && b>c)
    {
        return b;
    }
    if(a>b && a>c)
    {
        return a;
    }
    if(c>a && c>b)
    {
        return c;
    }
}

void exo1()
{
    printf("Exo 1 : \n");
    int entree;
    scanf("%d", &entree);
    if(entree%3 ==0 && entree%13==0)
    {
        printf("%d est divisible par 3 et 13", entree);
    }
    else{
        printf("%d n'est pas divisible par 3 et 13", entree);
    }
}