#include <stdio.h>
int main()
{
	int x, y;
	printf("Please enter two number: ");
	scanf("%d %d", &x, &y);

	if (x > y) {
		printf("X is large.\n");
	} else if (x < y) {
		printf("Y is large.\n");
	} else {
		printf("Both are equal!\n");
	}
	return 0;
}