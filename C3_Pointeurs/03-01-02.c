#include <stdio.h>

int main(){
  char nom[50];
  int age; 

  char *ptr_nom = nom;
  int *ptr_age = &age; 

  char **ptr_ptr_nom = &ptr_nom;
  int **ptr_ptr_age = &ptr_age;

  printf("Nom : ");
  scanf("%s",*ptr_ptr_nom );
  
  printf("Age : ");
  scanf("%d", *ptr_ptr_age);

  printf("%s, %d ans\n", nom, age);

  return 0;

}
