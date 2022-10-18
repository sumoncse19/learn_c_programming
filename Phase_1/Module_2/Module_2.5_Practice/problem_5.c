#include<stdio.h>

int main() {
  char a;

  printf("Enter a character: ");
  scanf("%c", &a);

  printf("The ASCII value of %c = %d \n", a, a);

  return 0;
}