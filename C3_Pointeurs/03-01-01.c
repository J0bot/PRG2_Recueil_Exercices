#include <stdio.h>

int main()
{
	int a = 10;
	int *b_ptr;
	b_ptr = &a;
	printf("%d\n", *b_ptr);

	
	return 0;
}
