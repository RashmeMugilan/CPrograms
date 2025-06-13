#include <stdio.h>

int main() {
  float num1, num2, product;

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  product = num1 * num2;

  printf("Product = %.2f\n", product); //The %.2f format specifier is used to print the floating-point number with two decimal places.

  return 0;
}
