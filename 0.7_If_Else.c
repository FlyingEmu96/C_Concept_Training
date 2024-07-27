#include <stdio.h>

// Function to demonstrate basic if statement
void basicIfExample() {
    int a = 10;

    // Check if a is greater than 5
    if (a > 5) {
        printf("a is greater than 5\n");
    }
}

// Function to demonstrate if-else statement
void ifElseExample() {
    int a = 3;

    // Check if a is greater than 5
    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }
}

// Function to demonstrate if-else if-else statement
void ifElseIfElseExample() {
    int a = 5;

    // Check if a is greater than 5
    if (a > 5) {
        printf("a is greater than 5\n");
    } else if (a == 5) {
        printf("a is equal to 5\n");
    } else {
        printf("a is less than 5\n");
    }
}

// Function to demonstrate nested if statement
void nestedIfExample() {
    int a = 10;
    int b = 5;

    // Check if a is greater than 5
    if (a > 5) {
        // Nested if: Check if b is greater than 2
        if (b > 2) {
            printf("a is greater than 5 and b is greater than 2\n");
        }
    }
}

// Function to demonstrate logical operators in if statement
void logicalOperatorsExample() {
    int a = 10;
    int b = 5;

    // Check if both a is greater than 5 and b is greater than 2
    if (a > 5 && b > 2) {
        printf("a is greater than 5 and b is greater than 2\n");
    }

    // Check if either a is greater than 5 or b is greater than 10
    if (a > 5 || b > 10) {
        printf("a is greater than 5 or b is greater than 10\n");
    }
}

// Main function to call all examples
int main() {
    printf("Basic If Example:\n");
    basicIfExample();

    printf("\nIf-Else Example:\n");
    ifElseExample();

    printf("\nIf-Else If-Else Example:\n");
    ifElseIfElseExample();

    printf("\nNested If Example:\n");
    nestedIfExample();

    printf("\nLogical Operators Example:\n");
    logicalOperatorsExample();

    return 0;
}
