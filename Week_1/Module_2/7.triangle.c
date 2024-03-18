// base and height are given, we need to find out the area of a triangle.
// three sides value of a rectangle are given, we need to find out the area of a triangle.

int main()
{
  int base, height;
  float area;

  printf("Enter the base of the triangle: ");
  scanf("%d", &base);

  printf("Enter the height of the triangle: ");
  scanf("%d", &height);

  area = base * height / 2;
  printf("The area of the triangle is: %.2f\n", area);

  return 0;
}