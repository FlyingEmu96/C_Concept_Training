#include <stdio.h>

void integerVariables() {
    int a = 10;              // Declaration and initialization
    unsigned int b = 20;     // Unsigned integer
    short c = -30;           // Short integer
    unsigned short d = 40;   // Unsigned short
    long e = 50L;            // Long integer
    unsigned long f = 60UL;  // Unsigned long
    long long g = 70LL;      // Long long integer
    unsigned long long h = 80ULL;  // Unsigned long long

    printf("int: %d\n", a);
    printf("unsigned int: %u\n", b);
    printf("short: %d\n", c);
    printf("unsigned short: %u\n", d);
    printf("long: %ld\n", e);
    printf("unsigned long: %lu\n", f);
    printf("long long: %lld\n", g);
    printf("unsigned long long: %llu\n", h);
}

void floatingPointVariables() {
    float a = 5.5f;          // Float
    double b = 10.5;         // Double
    long double c = 20.5L;   // Long double

    printf("float: %f\n", a);
    printf("double: %lf\n", b);
    printf("long double: %Lf\n", c);
}

void characterVariables() {
    char a = 'A';            // Character
    unsigned char b = 255;   // Unsigned character
    signed char c = -127;    // Signed character

    printf("char: %c\n", a);
    printf("unsigned char: %u\n", b);
    printf("signed char: %d\n", c);
}

void arrayVariables() {
    int arr[5] = {1, 2, 3, 4, 5};  // Integer array
    char str[] = "Hello";          // Character array (string)

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("String: %s\n", str);
}

void pointerVariables() {
    int a = 10;
    int *ptr = &a;                // Pointer to integer

    printf("Pointer address: %p\n", (void *)ptr);
    printf("Pointer value: %d\n", *ptr);
}

struct Point {
    int x;
    int y;
};

void structureVariables() {
    struct Point p1 = {10, 20};  // Structure variable

    printf("Point: (%d, %d)\n", p1.x, p1.y);
}

union Data {
    int i;
    float f;
    char str[20];
};

void unionVariables() {
    union Data data;

    data.i = 10;
    printf("Union int: %d\n", data.i);

    data.f = 220.5;
    printf("Union float: %f\n", data.f);

    strcpy(data.str, "Hello");
    printf("Union string: %s\n", data.str);
}

enum Color { RED, GREEN, BLUE };

void enumerationVariables() {
    enum Color color;
    color = GREEN;

    printf("Enumeration Color: %d\n", color);
}

void staticVariableExample() {
    static int count = 0;   // Static variable
    count++;
    printf("Static count: %d\n", count);
}

int main() {
    printf("Integer Variables:\n");
    integerVariables();

    printf("\nFloating-Point Variables:\n");
    floatingPointVariables();

    printf("\nCharacter Variables:\n");
    characterVariables();

    printf("\nArray Variables:\n");
    arrayVariables();

    printf("\nPointer Variables:\n");
    pointerVariables();

    printf("\nStructure Variables:\n");
    structureVariables();

    printf("\nUnion Variables:\n");
    unionVariables();

    printf("\nEnumeration Variables:\n");
    enumerationVariables();

    printf("\nStatic Variables:\n");
    for (int i = 0; i < 5; i++) {
        staticVariableExample();
    }

    return 0;
}
