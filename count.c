#include <stdio.h>

int main()
{
  int num, i, j;
  printf("Enter a number");
  scanf("%d", &num);

  for (i = 1; i < num;)
  {
    for (j = 0; j < 10; j++)
    { // to print only 10 numbers on each row
      printf("%d, ", i);
      i++;
    }
    printf("\n");
  }

  return 0;
}