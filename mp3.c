// //Implement a function that checks if a given integer is a prime number. Use this function in the
// main program to check if numbers entered by the user are prime.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    if (num == 2 || num == 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0) {
        return 0; // Even numbers greater than 2 are not prime
    }
    for (int a = 3; a <= sqrt(num); a += 2) {
        if (num % a == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n, number;
    printf("Enter the amount of numbers you want to input: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        int result = is_prime(number);
        if (result == 1) {
            printf("%d is a prime number\n", number);
        } else {
            printf("%d is not a prime number\n", number);
        }
    }
    return 0;
}
