/*

C IS NOT OBJECT ORIENTED IT IS PROCEDURAL LANGUAGE though you need to understand objects in C a and how they behave.

In C, the term "object" refers to a region of data storage in the memory that is represented by a variable or a data structure. 
It is a general term used to describe any location in memory that can hold a value and is manipulated by a program. 
Unlike object-oriented programming languages like C++ or Java, C does not have objects in the sense of classes and instances. 
However, it still deals with objects in the context of memory and data storage.
*/
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
#include <stdio.h>

void scalarObjects() {
    int a = 10;          // 'a' is an integer object
    float b = 5.5f;      // 'b' is a float object
    char c = 'A';        // 'c' is a char object
    
    printf("int: %d, float: %f, char: %c\n", a, b, c);
}
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
void aggregateObjects() {
    // Array object
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Structure object
    struct Point {
        int x;
        int y;
    };
    
    struct Point p1 = {10, 20};
    
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Structure Point: (%d, %d)\n", p1.x, p1.y);
}
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
#include <stdlib.h>
void pointerObjects() {
    // Pointer object
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr != NULL) {
        *ptr = 100;
        printf("Pointer value: %p\n", (void *)ptr);
        printf("Pointer dereferenced: %d\n", *ptr);
        
        // Free the allocated memory
        free(ptr);
    } else {
        printf("Memory allocation failed.\n");
    }
}
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
void storageClassExample() {
    static int count = 0;  // Static object
    
    count++;
    printf("Static count: %d\n", count);
}

int main() {
    scalarObjects();
    aggregateObjects();
    pointerObjects();
    
    for (int i = 0; i < 5; i++) {
        storageClassExample();
    }
    
    return 0;
}
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
/*In C, objects are fundamental units of storage that hold data.
They can be of various types and are managed using different storage classes.
The concept of objects in C revolves around memory management, data manipulation, and program scope and lifetime, which are crucial for efficient and effective programming in C.
*/
//_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

