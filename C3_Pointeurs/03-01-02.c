#include <stdio.h>

int main()
{
	char nom[4];
	int age ;
	char ptr_nom* = &nom;
	int ptr_age* = &age;
	char ptr_ptr_nom**= &ptr_nom;
	int ptr_ptr_age** = &ptr_age;

	ptr_ptr_nom** = "josé";
	ptr_ptr_age** = 23;

	for(int i = 0;)
	return 0;
}
