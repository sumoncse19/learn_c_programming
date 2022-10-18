#include<stdio.h>

int main() {
  int n, p, i, digit = 0, divideBy=1, withoutPercentage;

  printf("Enter a number with percentage: ");
  scanf("%d", &n);

  p = n;

  while(p!=0){
    p = p / 10;
    digit++;
  }

  for (i = 0; i < digit; i++) {
    divideBy = divideBy * 10;
  }

  withoutPercentage = n % divideBy;

  printf("The last digit is: %d\n", withoutPercentage);

  return 0;
}