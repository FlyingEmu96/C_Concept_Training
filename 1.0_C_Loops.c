#include <stdio.h>

// Function to demonstrate while loop
void whileLoopExample() {
    int i = 0;

    // While loop: continue looping as long as i is less than 5
    while (i < 5) {
        // Print the current value of i
        printf("While Loop: i = %d\n", i);
        
        // Increment i by 1
        i++;
    }
}

// Function to demonstrate do-while loop
void doWhileLoopExample() {
    int i = 0;

    // Do-while loop: execute the loop body at least once
    do {
        // Print the current value of i
        printf("Do-While Loop: i = %d\n", i);
        
        // Increment i by 1
        i++;
    } while (i < 5); // Continue looping as long as i is less than 5
}

// Function to demonstrate for loop
void forLoopExample() {
    // For loop: initialize, condition check, and increment in one line
    for (int i = 0; i < 5; i++) {
        // Print the current value of i
        printf("For Loop: i = %d\n", i);
    }
}

// Function to demonstrate nested loops
void nestedLoopExample() {
    // Outer loop for rows
    for (int i = 0; i < 3; i++) {
        // Inner loop for columns
        for (int j = 0; j < 3; j++) {
            // Print the current values of i and j
            printf("Nested Loop: i = %d, j = %d\n", i, j);
        }
    }
}

// Main function to call all examples
int main() {
    printf("While Loop Example:\n");
    whileLoopExample();

    printf("\nDo-While Loop Example:\n");
    doWhileLoopExample();

    printf("\nFor Loop Example:\n");
    forLoopExample();

    printf("\nNested Loop Example:\n");
    nestedLoopExample();

    return 0;
}
