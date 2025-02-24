#include <stdio.h>

int main()
{
    int sum = 0; //pas oublier d'initialiser sinon zbeul
    for(int i = 1; i<=100; i++){
        sum+=i;
    }
    printf("La somme est : %d\n" ,sum);
}