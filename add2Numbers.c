#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
