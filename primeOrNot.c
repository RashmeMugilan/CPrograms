/* A prime number is a natural number greater than 1 that has only two distinct positive divisors: 1 and itself. 
   In other words, a prime number cannot be divided evenly by any other number except 1 and the number itself. 
   For example, 2, 3, 5, 7, 11, and 13 are all prime numbers. 
   The number 1 is not considered a prime number because it only has one divisor (itself), not two distinct divisors.
*/

#include <stdio.h>
#include <stdbool.h> //header to use true or false
#include <math.h> // to use mathematical calculations such as sqrt

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
