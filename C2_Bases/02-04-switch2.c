#include <stdio.h>

int main()
{
    printf("Bienvenue dans cette calculatrice ! \n");
    float a, b;
    char c;
    scanf("%f %c %f", &a, &c, &b);

    switch (c)
    {
    case '+':
        printf("%f", a+b);
        break;
    case '-':
        printf("%f", a-b);
        break;
    case '*':
        printf("%f", a*b);
        break;
    case '/':
        printf("%f", a/b);
        break;
    
    default:
        printf("what");
        break;
    }
    printf("\n");
}