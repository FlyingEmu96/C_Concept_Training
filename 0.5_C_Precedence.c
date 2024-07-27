#include <stdio.h>

void arithmeticPrecedence() {
    int a = 10, b = 5, c = 2;
    int result;

    // Multiplication (*) has higher precedence than addition (+)
    result = a + b * c;  // result = 10 + (5 * 2) = 20
    printf("10 + 5 * 2 = %d\n", result);

    // Use parentheses to change the precedence
    result = (a + b) * c;  // result = (10 + 5) * 2 = 30
    printf("(10 + 5) * 2 = %d\n", result);
}

void logicalPrecedence() {
    int a = 1, b = 0, c = 1;
    int result;

    // Logical AND (&&) has higher precedence than logical OR (||)
    result = a || b && c;  // result = 1 || (0 && 1) = 1
    printf("1 || 0 && 1 = %d\n", result);

    // Use parentheses to change the precedence
    result = (a || b) && c;  // result = (1 || 0) && 1 = 1
    printf("(1 || 0) && 1 = %d\n", result);
}

void bitwisePrecedence() {
    int a = 6, b = 3;  // a = 6 (0110 in binary), b = 3 (0011 in binary)
    int result;

    // Bitwise AND (&) has higher precedence than bitwise OR (|)
    result = a | b & 1;  // result = 0110 | (0011 & 0001) = 0110 | 0001 = 0111 (7 in decimal)
    printf("6 | 3 & 1 = %d\n", result);

    // Use parentheses to change the precedence
    result = (a | b) & 1;  // result = (0110 | 0011) & 0001 = 0111 & 0001 = 0001 (1 in decimal)
    printf("(6 | 3) & 1 = %d\n", result);
}

void conditionalAssignmentPrecedence() {
    int a = 10, b = 5, result;

    // Assignment (=) has lower precedence than arithmetic (+)
    result = a > b ? a : b = b + 1;  // result = (a > b) ? a : (b = b + 1) => 10
    printf("result = %d, b = %d\n", result, b);  // b is incremented to 6

    // Use parentheses to change the precedence
    result = (a > b) ? a : (b = b + 1);  // result = (a > b) ? a : (b = b + 1) => 10
    printf("result = %d, b = %d\n", result, b);
}

int main() {
    printf("Arithmetic Operations:\n");
    arithmeticPrecedence();

    printf("\nLogical Operations:\n");
    logicalPrecedence();

    printf("\nBitwise Operations:\n");
    bitwisePrecedence();

    printf("\nConditional and Assignment Operations:\n");
    conditionalAssignmentPrecedence();

    return 0;
}
