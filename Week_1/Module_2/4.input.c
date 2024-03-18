#include <stdio.h>

int main()
{
  // Ekhane code likhbo
  // How can we get input from user?
  int num1, num2;
  printf("Enter first number: ");
  scanf("%d", &num1); // & is use for defining address of num variable
  printf("Enter second number: ");
  scanf("%d", &num2);                                 // & is use for defining address of num variable
  printf("You entered first number is: %d,\t", num1); // %d is format specifier
  printf("and second number is: %d\n", num2);         // %d is format specifier

  return 0;
}