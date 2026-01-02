#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
    return 0;
}