#include <stdio.h>

int main()
{
  char names[10][30]; //I tried to use character pointer and 1D array
  int i;

  for(i=0; i<10; i++) {
    printf("Enter name %i\n", i+1);
    fgets(names[i], sizeof(names[i]), stdin);
  }

  printf("\nThe names you entered are:\n");

  for(i=0; i<10; i++) {
    printf("%s", names[i]);
  }


  return 0;
}