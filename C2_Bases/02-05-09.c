#include <stdio.h>

int main(){
	int num=0, inverse = 0;
	printf("Entrez un nombre à inverser : ");
	scanf("%d", &num);
	do{
		inverse = inverse*10 + num %10;
		num/=10;
	}while(num>0);

	printf("inverse : %d\n", inverse);
	return 0;
}
