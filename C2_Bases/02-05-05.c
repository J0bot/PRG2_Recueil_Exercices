#include <stdio.h>

int main()
{   
    int sum = 0, input;

    printf("Entrez des nombres à additioner");

    while(input!=0)
    {
        scanf("%d", &input);
        sum+=input;
    }

    printf("Somme : %d\n", sum);

    return 0;
}