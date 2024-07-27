#include <stdio.h>
#include <string.h>

void integerTypes() {
    int a = 10;
    short b = 20;
    long c = 30000;
    long long d = 4000000000;
    
    unsigned int ua = 10;
    unsigned short ub = 20;
    unsigned long uc = 30000;
    unsigned long long ud = 4000000000;
    
    printf("int: %d\n", a);
    printf("short: %d\n", b);
    printf("long: %ld\n", c);
    printf("long long: %lld\n", d);
    printf("unsigned int: %u\n", ua);
    printf("unsigned short: %u\n", ub);
    printf("unsigned long: %lu\n", uc);
    printf("unsigned long long: %llu\n", ud);
}

void characterTypes() {
    char ch = 'A';
    unsigned char uch = 255;
    signed char sch = -127;
    
    printf("char: %c\n", ch);
    printf("unsigned char: %u\n", uch);
    printf("signed char: %d\n", sch);
}

void floatingPointTypes() {
    float f = 5.5f;
    double d = 10.5;
    long double ld = 20.5L;
    
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);
}

void arrayTypes() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void pointerTypes() {
    int x = 10;
    int *ptr = &x;
    
    printf("Pointer value: %p\n", (void *)ptr);
    printf("Pointer dereferenced: %d\n", *ptr);
}

struct Point {
    int x;
    int y;
};

void structureTypes() {
    struct Point p1 = {10, 20};
    
    printf("Structure Point: (%d, %d)\n", p1.x, p1.y);
}

union Data {
    int i;
    float f;
    char str[20];
};

void unionTypes() {
    union Data data;
    
    data.i = 10;
    printf("Union int: %d\n", data.i);
    
    data.f = 220.5;
    printf("Union float: %f\n", data.f);
    
    strcpy(data.str, "Hello");
    printf("Union string: %s\n", data.str);
}

enum Color { RED, GREEN, BLUE };

void enumerationTypes() {
    enum Color color;
    color = GREEN;
    
    printf("Enumeration Color: %d\n", color);
}

void voidTypeExample() {
    printf("This function does not return anything.\n");
}

int main() {
    integerTypes();
    characterTypes();
    floatingPointTypes();
    arrayTypes();
    pointerTypes();
    structureTypes();
    unionTypes();
    enumerationTypes();
    voidTypeExample();
    
    return 0;
}


