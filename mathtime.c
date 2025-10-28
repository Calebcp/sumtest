#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter first number: ");
    fflush(stdout);  
    scanf("%d", &a);
    printf("Enter second number: ");
    fflush(stdout);
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    return 0;
}