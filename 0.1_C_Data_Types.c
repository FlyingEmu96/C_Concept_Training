#include <stdio.h>
#include <string.h>

// Function demonstrating different integer types in C
void integerTypes() {
    // Signed integer types
    int a = 10;              // 'int' is a basic integer type, typically 4 bytes
    short b = 20;            // 'short' is a shorter integer type, typically 2 bytes
    long c = 30000;          // 'long' is a longer integer type, typically 4 or 8 bytes
    long long d = 4000000000; // 'long long' is an extended integer type, typically 8 bytes
    
    // Unsigned integer types
    unsigned int ua = 10;              // 'unsigned int' can only represent non-negative values, typically 4 bytes
    unsigned short ub = 20;            // 'unsigned short' is a shorter unsigned integer, typically 2 bytes
    unsigned long uc = 30000;          // 'unsigned long' is a longer unsigned integer, typically 4 or 8 bytes
    unsigned long long ud = 4000000000; // 'unsigned long long' is an extended unsigned integer, typically 8 bytes
    
    // Print integer types
    printf("int: %d\n", a);
    printf("short: %d\n", b);
    printf("long: %ld\n", c);
    printf("long long: %lld\n", d);
    printf("unsigned int: %u\n", ua);
    printf("unsigned short: %u\n", ub);
    printf("unsigned long: %lu\n", uc);
    printf("unsigned long long: %llu\n", ud);
}

// Function demonstrating different character types in C
void characterTypes() {
    // Character types
    char ch = 'A';              // 'char' is used for single characters, typically 1 byte
    unsigned char uch = 255;    // 'unsigned char' is an unsigned version of 'char', typically 1 byte, range 0 to 255
    signed char sch = -127;     // 'signed char' is a signed version of 'char', typically 1 byte, range -128 to 127
    
    // Print character types
    printf("char: %c\n", ch);
    printf("unsigned char: %u\n", uch);
    printf("signed char: %d\n", sch);
}

// Function demonstrating different floating point types in C
void floatingPointTypes() {
    // Floating point types
    float f = 5.5f;            // 'float' is a single-precision floating point type, typically 4 bytes
    double d = 10.5;           // 'double' is a double-precision floating point type, typically 8 bytes
    long double ld = 20.5L;    // 'long double' is an extended-precision floating point type, typically more than 8 bytes
    
    // Print floating point types
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);
}

// Function demonstrating array types in C
void arrayTypes() {
    // Array of integers
    int arr[5] = {1, 2, 3, 4, 5};  // 'arr' is an array of 5 integers
    
    // Print array elements
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function demonstrating pointer types in C
void pointerTypes() {
    int x = 10;                  // Integer variable
    int *ptr = &x;               // 'ptr' is a pointer to integer 'x'
    
    // Print pointer address and value it points to
    printf("Pointer value: %p\n", (void *)ptr);
    printf("Pointer dereferenced: %d\n", *ptr);
}

// Define a structure named Point
struct Point {
    int x;  // Integer member 'x'
    int y;  // Integer member 'y'
};

// Function demonstrating structure types in C
void structureTypes() {
    struct Point p1 = {10, 20};  // 'p1' is a variable of type 'struct Point'
    
    // Print structure members
    printf("Structure Point: (%d, %d)\n", p1.x, p1.y);
}

// Define a union named Data
union Data {
    int i;           // Integer member
    float f;         // Floating point member
    char str[20];    // Character array member
};

// Function demonstrating union types in C
void unionTypes() {
    union Data data;  // 'data' is a variable of type 'union Data'
    
    // Assign and print union members one at a time
    data.i = 10;
    printf("Union int: %d\n", data.i);
    
    data.f = 220.5;
    printf("Union float: %f\n", data.f);
    
    strcpy(data.str, "Hello");
    printf("Union string: %s\n", data.str);
}

// Define an enumeration named Color
enum Color { RED, GREEN, BLUE };

// Function demonstrating enumeration types in C
void enumerationTypes() {
    enum Color color;  // 'color' is a variable of type 'enum Color'
    color = GREEN;     // Assign enumeration value
    
    // Print enumeration value
    printf("Enumeration Color: %d\n", color);
}

// Function demonstrating void type
void voidTypeExample() {
    // Function that does not return anything
    printf("This function does not return anything.\n");
}

// Main function - entry point of the program
int main() {
    // Call each type demonstration function
    integerTypes();
    characterTypes();
    floatingPointTypes();
    arrayTypes();
    pointerTypes();
    structureTypes();
    unionTypes();
    enumerationTypes();
    voidTypeExample();
    
    return 0;  // Return 0 to indicate successful execution
}
