#include <stdio.h>

void declareAndInitializeVariables() {
    int a = 20;
    int b = 10;
    float c = 5.5;
    float d = 2.5;
    
    printf("Integer variables: a = %d, b = %d\n", a, b);
    printf("Floating-point variables: c = %f, d = %f\n", c, d);
}

void addition() {
    int a = 20;
    int b = 10;
    int sum = a + b;

    float c = 5.5;
    float d = 2.5;
    float float_sum = c + d;

    printf("Integer addition: %d + %d = %d\n", a, b, sum);
    printf("Floating-point addition: %f + %f = %f\n", c, d, float_sum);
}

void subtraction() {
    int a = 20;
    int b = 10;
    int difference = a - b;

    float c = 5.5;
    float d = 2.5;
    float float_difference = c - d;

    printf("Integer subtraction: %d - %d = %d\n", a, b, difference);
    printf("Floating-point subtraction: %f - %f = %f\n", c, d, float_difference);
}

void multiplication() {
    int a = 20;
    int b = 10;
    int product = a * b;

    float c = 5.5;
    float d = 2.5;
    float float_product = c * d;

    printf("Integer multiplication: %d * %d = %d\n", a, b, product);
    printf("Floating-point multiplication: %f * %f = %f\n", c, d, float_product);
}

void division() {
    int a = 20;
    int b = 10;
    int quotient = a / b;

    float c = 5.5;
    float d = 2.5;
    float float_quotient = c / d;

    printf("Integer division: %d / %d = %d\n", a, b, quotient);
    printf("Floating-point division: %f / %f = %f\n", c, d, float_quotient);
}

void modulus() {
    int a = 20;
    int b = 10;
    int remainder = a % b;

    printf("Modulus: %d %% %d = %d\n", a, b, remainder);
}

void combinedOperations() {
    int a = 20;
    int b = 10;
    int c = 5;
    int result = (a + b) * c - b / c;

    float x = 5.5;
    float y = 2.5;
    float z = 1.5;
    float float_result = (x + y) * z - y / z;

    printf("Combined integer operations result: %d\n", result);
    printf("Combined floating-point operations result: %f\n", float_result);
}

void incrementDecrement() {
    int a = 5;

    printf("Original value of a: %d\n", a);
    a++;
    printf("After increment: %d\n", a);
    a--;
    printf("After decrement: %d\n", a);
}

int main() {
    printf("Variable Declarations and Initialization:\n");
    declareAndInitializeVariables();

    printf("\nAddition:\n");
    addition();

    printf("\nSubtraction:\n");
    subtraction();

    printf("\nMultiplication:\n");
    multiplication();

    printf("\nDivision:\n");
    division();

    printf("\nModulus:\n");
    modulus();

    printf("\nCombined Operations:\n");
    combinedOperations();

    printf("\nIncrement and Decrement Operators:\n");
    incrementDecrement();

    return 0;
}
