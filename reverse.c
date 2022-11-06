#include <stdio.h>
#include <string.h>

void revertStr(char *str1) {
  int i, len, temp;
  len = strlen(str1);

  for(i = 0; i < len/2; i++) {
    temp = str1[i];
    str1[i] = str1[len - i - 1];
    str1[len - i - 1] = temp;
  }
}

int main() {
  char str[100];
  printf("Please enter a statement\n");
  fgets(str, sizeof(str), stdin);

  printf("Before reversing: \n%s", str);

  revertStr(str);

  printf("After reversing: %s\n", str);
}


// int main() {
//   char statement[250], reversed[50][250];
//   printf("Please type a statement\n");
//   fgets(statement, sizeof(statement), stdin);

//   printf("%s ", statement);

//   char * token = strtok(statement, " ");
//   while(token != NULL) {
//     printf(" %s\n", token);
//     token = strtok(NULL, " ");
//   }

//   return 0;
//}