#include<stdio.h>

int main() {
  int x, a, b;

  scanf("%d %d %d", &x, &a, &b);

  if(x%2==0) {
    printf("X is even, so summation is %d\n", a + b);
  } else {
    printf("X is odd, so difference is %d\n", a - b);
  }
  return 0;
}