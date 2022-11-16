#include <stdio.h>
#include <stdlib.h>

int main()
{
  int testNumber;
  char testString[100];
  FILE *input;

  // printf("Enter the number of tests: ");
  // scanf("%d", &testNum);

  if ((input = fopen("./adam.in", "r")) == NULL)
  {
    printf("Error opening file!");

    // exit the program
    exit(1);
  }

  fscanf(input, "%d", &testNumber);
  // printf("%d", testNumber);

  for (int i = 1; i <= testNumber;)
  {
    fscanf(input, "%s", testString);
    int stepCount = 0;

    for (int j = 0; j < 100;)
    {
      switch (testString[j])
      {
      case 'U':
        stepCount += 1;
        j++;
        break;
      case 'D':
        printf(" %d\n", stepCount);
        j = 100; // i need a better way to end the inner loop
        i++;
        break;
      default:
        printf("This string has an invalid character");
        break;
      }
    }
  }

  return 0;
}