#include <stdio.h>

int main()
{
    int input = 0;
    int max = 0;
    int previous = 0;
    printf("Entrez des nombres pour trouver le maximum (-1 pour terminer):\n");


    while(input!=(-1))
    {
        scanf("%d", &input);
        max = input > previous ? input : previous;
        previous = max;
    }

    printf("Le plus grand nomnre est: %d\n", max);
    return 0;
}