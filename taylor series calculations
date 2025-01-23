#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
double factorial(int n);
double power(double base, int exp);
double taylorSin(double x, int terms);
double taylorCos(double x, int terms);
double taylorArctan(double x, int terms);

int main() {
    double x;
    int terms;

    // Taking user input
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms for approximation: ");
    scanf("%d", &terms);

    // Calculate Taylor series approximations
    double sinResult = taylorSin(x, terms);
    double cosResult = taylorCos(x, terms);
    double arctanResult = taylorArctan(x, terms);

    // Print the results
    printf("\nTaylor Series Approximation for sin(x): %.15lf\n", sinResult);
    printf("Taylor Series Approximation for cos(x): %.15lf\n", cosResult);
    printf("Taylor Series Approximation for arctan(x): %.15lf\n", arctanResult);

    // Compare with standard library functions
    printf("\nStandard library sin(x): %.15lf\n", sin(x));
    printf("Standard library cos(x): %.15lf\n", cos(x));
    printf("Standard library arctan(x): %.15lf\n", atan(x));

    return 0;
}

// Function to calculate factorial of a number
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate base raised to the power of exp
double power(double base, int exp) {
    double result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

// Taylor series approximation for sin(x)
double taylorSin(double x, int terms) {
    double result = 0;
    for (int n = 0; n < terms; n++) {
        int sign = (n % 2 == 0) ? 1 : -1;  // Alternating sign
        int exp = 2 * n + 1;  // Odd powers
        result += sign * (power(x, exp) / factorial(exp));
    }
    return result;
}

// Taylor series approximation for cos(x)
double taylorCos(double x, int terms) {
    double result = 0;
    for (int n = 0; n < terms; n++) {
        int sign = (n % 2 == 0) ? 1 : -1;  // Alternating sign
        int exp = 2 * n;  // Even powers
        result += sign * (power(x, exp) / factorial(exp));
    }
    return result;
}

// Taylor series approximation for arctan(x)
double taylorArctan(double x, int terms) {
    double result = 0;
    for (int n = 0; n < terms; n++) {
        int sign = (n % 2 == 0) ? 1 : -1;  // Alternating sign
        int exp = 2 * n + 1;  // Odd powers
        result += sign * (power(x, exp) / exp);
    }
    return result;
}
