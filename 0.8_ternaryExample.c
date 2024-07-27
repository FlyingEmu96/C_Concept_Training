#include <stdio.h>

// Function to demonstrate the ternary conditional operator
void ternaryExample() {
    int a = 10;
    int b = 20;
    int max;

    // Use the ternary operator to find the maximum of a and b
    max = (a > b) ? a : b;

    printf("The maximum of %d and %d is %d\n", a, b, max);
}

// Function to demonstrate nested ternary conditional operator
void nestedTernaryExample() {
    int a = 10;
    int b = 20;
    int c = 15;
    int max;

    // Use nested ternary operators to find the maximum of a, b, and c
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum of %d, %d, and %d is %d\n", a, b, c, max);
}

// Function to demonstrate the ternary conditional operator for simple output
void ternaryOutputExample() {
    int a = 10;
    int b = 20;

    // Use the ternary operator for a simple output decision
    printf("%d is %s than %d\n", a, (a > b) ? "greater" : "less", b);
}

int main() {
    printf("Ternary Conditional Operator Example:\n");
    ternaryExample();

    printf("\nNested Ternary Conditional Operator Example:\n");
    nestedTernaryExample();

    printf("\nTernary Conditional Operator for Output Example:\n");
    ternaryOutputExample();

    return 0;
}
