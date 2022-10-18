#include<stdio.h>

int main() {
  int radius;
  float area;
  printf("Enter the radius of a circle: ");
  scanf("%d", &radius);

  area = 3.14159 * radius * radius;

  printf("The area is: %f\n", area);

  return 0;
}