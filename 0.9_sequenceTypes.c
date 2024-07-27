#include <stdio.h>
#include <stdlib.h>

// Function to demonstrate array usage
void arrayExample() {
    // Declaration and initialization of an integer array with 5 elements
    int intArray[5] = {1, 2, 3, 4, 5};

    // Accessing and modifying array elements
    intArray[0] = 10; // Modifying the first element

    // Printing array elements
    for (int i = 0; i < 5; i++) {
        printf("intArray[%d] = %d\n", i, intArray[i]);
    }

    // Declaration and initialization of a character array (string)
    char charArray[] = "Hello";

    // Printing the character array
    printf("charArray = %s\n", charArray);

    // Modifying elements of the character array
    charArray[0] = 'h';
    printf("Modified charArray = %s\n", charArray);
}

// Function to demonstrate multidimensional array usage
void multiDimensionalArrayExample() {
    // Declaration and initialization of a 2D array (matrix) with 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing and modifying elements of the 2D array
    matrix[0][1] = 20; // Modifying the element at the first row and second column

    // Printing the 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }
}

// Definition of a node in a linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to demonstrate linked list usage
void linkedListExample() {
    // Creating nodes
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    // Printing the linked list
    printLinkedList(head);

    // Freeing allocated memory
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function to call all examples
int main() {
    printf("Array Example:\n");
    arrayExample();

    printf("\nMultidimensional Array Example:\n");
    multiDimensionalArrayExample();

    printf("\nLinked List Example:\n");
    linkedListExample();

    return 0;
}
