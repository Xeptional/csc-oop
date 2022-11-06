#include <stdio.h>

int main()
{
  char name[25];

  printf("Please enter your name\n");
  //scanf("%s", name);
  //printf("Hello! World, %s.\n", name);

  // getting string with space
  fgets(name, sizeof(name), stdin);
  printf("Hello! World, %s", name);

  return 0;
}