#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to demonstrate static initialization of strings
void staticInitialization() {
    // Static initialization of a string
    char str1[] = "Hello, World!";
    // Another way of initializing a string
    char str2[20] = "Hello, C!";

    // Printing the strings
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
}

// Function to demonstrate input and output of strings
void inputOutput() {
    char str[50];

    // Reading a string from the user
    printf("Enter a string: ");
    scanf("%49s", str); // %49s ensures we don't read more than 49 characters to avoid buffer overflow

    // Printing the string
    printf("You entered: %s\n", str);
}

// Function to demonstrate getting the length of a string
void stringLength() {
    char str[] = "Hello, World!";
    int length = strlen(str); // Get the length of the string

    printf("The length of the string \"%s\" is %d\n", str, length);
}

// Function to demonstrate copying a string
void stringCopy() {
    char src[] = "Hello, C!";
    char dest[20];

    strcpy(dest, src); // Copy src to dest

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
}

// Function to demonstrate concatenating strings
void stringConcatenate() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2); // Concatenate str2 to str1

    printf("Concatenated string: %s\n", str1);
}

// Function to demonstrate comparing strings
void stringCompare() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    int result1 = strcmp(str1, str2); // Compare str1 and str2
    int result2 = strcmp(str1, str3); // Compare str1 and str3

    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);
}

// Function to demonstrate finding a character in a string
void stringFindCharacter() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *pos = strchr(str, ch); // Find first occurrence of 'o'

    if (pos != NULL) {
        printf("Character '%c' found at position %ld\n", ch, pos - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }
}

// Function to demonstrate finding a substring in a string
void stringFindSubstring() {
    char str[] = "Hello, World!";
    char substr[] = "World";
    char *pos = strstr(str, substr); // Find first occurrence of "World"

    if (pos != NULL) {
        printf("Substring \"%s\" found at position %ld\n", substr, pos - str);
    } else {
        printf("Substring \"%s\" not found\n", substr);
    }
}

// Function to demonstrate safe input using fgets
void safeInput() {
    char str[50];

    // Using fgets to safely read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read up to sizeof(str)-1 characters

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Printing the string
    printf("You entered: %s\n", str);
}

// Function to demonstrate dynamic string allocation
void dynamicStringAllocation() {
    // Allocate memory for a string
    char *str = (char *)malloc(50 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Copy a string into the allocated memory
    strcpy(str, "Hello, dynamically allocated string!");

    // Printing the string
    printf("%s\n", str);

    // Free the allocated memory
    free(str);
}

// Function to demonstrate tokenizing a string
void tokenizeString() {
    char str[] = "Hello, World! Welcome to C programming.";
    char delim[] = " ";
    char *token;

    // Get the first token
    token = strtok(str, delim);

    // Walk through other tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }
}

int main() {
    printf("Static Initialization Example:\n");
    staticInitialization();

    printf("\nInput and Output Example:\n");
    inputOutput();

    printf("\nString Length Example:\n");
    stringLength();

    printf("\nString Copy Example:\n");
    stringCopy();

    printf("\nString Concatenate Example:\n");
    stringConcatenate();

    printf("\nString Compare Example:\n");
    stringCompare();

    printf("\nString Find Character Example:\n");
    stringFindCharacter();

    printf("\nString Find Substring Example:\n");
    stringFindSubstring();

    printf("\nSafe Input Example:\n");
    safeInput();

    printf("\nDynamic String Allocation Example:\n");
    dynamicStringAllocation();

    printf("\nTokenize String Example:\n");
    tokenizeString();

    return 0;
}
