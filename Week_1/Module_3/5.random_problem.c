#include<stdio.h>
int main() {
    int x, a, b, s;

    scanf("%d %d %d", &x, &a, &b);

    if(x%2 == 0) {
        s = a+b;
    } else {
        s = a-b;
    }

    printf("%d\n", s);
}