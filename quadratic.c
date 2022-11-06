#include <stdio.h>
#include <math.h>

// gcc quadratic.c  -o quadratic -lm

int main()
{
  float a, b, c, dis, root1, root2;

  printf("Enter coefficient of x: ");
  scanf("%f", &a);

  printf("Enter coefficient of y: ");
  scanf("%f", &b);

  printf("Enter constant value: ");
  scanf("%f", &c);

  dis = pow(b, 2) - 4. * a * c;

  if (dis > 0)
  {
    root1 = (-b + sqrt(dis)) / (2. * a);
    root2 = (-b - sqrt(dis)) / (2. * a);

    printf("root1: %1f\n", root1);
    printf("root2: %1f\n", root2);
  }
  else
  {
    printf("No real roots!\n");
  }

  return 0;
}