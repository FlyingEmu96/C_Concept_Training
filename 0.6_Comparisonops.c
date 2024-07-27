#include <stdio.h>

// Function to demonstrate division operations
void divisionExample() {
    int a = 20;
    int b = 3;
    int int_quotient;
    float c = 20.0;
    float d = 3.0;
    float float_quotient;

    // Integer division
    int_quotient = a / b;  // Integer division: 20 / 3 = 6 (fractional part is discarded)
    printf("Integer division: %d / %d = %d\n", a, b, int_quotient);

    // Floating-point division
    float_quotient = c / d;  // Floating-point division: 20.0 / 3.0 = 6.6667
    printf("Floating-point division: %.1f / %.1f = %.4f\n", c, d, float_quotient);
}

// Function to demonstrate modulus operations
void modulusExample() {
    int a = 20;
    int b = 3;
    int remainder;

    // Modulus operation
    remainder = a % b;  // Modulus: 20 % 3 = 2 (remainder of the division 20 / 3)
    printf("Modulus: %d %% %d = %d\n", a, b, remainder);
}

// Function to demonstrate comparison operations
void comparisonExample() {
    int a = 20;
    int b = 3;

    // Comparison operators
    printf("Comparison operators:\n");
    printf("%d == %d = %d\n", a, b, a == b); // Equal to
    printf("%d != %d = %d\n", a, b, a != b); // Not equal to
    printf("%d > %d = %d\n", a, b, a > b);   // Greater than
    printf("%d < %d = %d\n", a, b, a < b);   // Less than
    printf("%d >= %d = %d\n", a, b, a >= b); // Greater than or equal to
    printf("%d <= %d = %d\n", a, b, a <= b); // Less than or equal to
}

// Function to demonstrate boolean (logical) operations
void booleanExample() {
    int a = 1; // True
    int b = 0; // False

    // Logical operators
    printf("Boolean operators:\n");
    printf("%d && %d = %d\n", a, b, a && b); // Logical AND
    printf("%d || %d = %d\n", a, b, a || b); // Logical OR
    printf("!%d = %d\n", a, !a);             // Logical NOT of a
    printf("!%d = %d\n", b, !b);             // Logical NOT of b
}

// Main function to call all examples
int main() {
    printf("Division Example:\n");
    divisionExample();

    printf("\nModulus Example:\n");
    modulusExample();

    printf("\nComparison Example:\n");
    comparisonExample();

    printf("\nBoolean Example:\n");
    booleanExample();

    return 0;
}
