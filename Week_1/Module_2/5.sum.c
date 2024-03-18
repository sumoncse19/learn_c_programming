#include <stdio.h>

int main()
{
  // c te code likhar niom

  // input newar system in c
  int a, b, sum, diff;
  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  sum = a + b;
  diff = a - b;

  printf("The number are: %d and %d\n", a, b);
  printf("The sum of these number is: %d\n", sum);
  printf("The difference of these number is: %d\n", diff);

  return 0;
}