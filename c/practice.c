 //Three ways ;
#include <stdio.h>

// Function to add two numbers and return the result
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Call the add function and store the result
    result = add(a, b);

    // Display the result
    printf("Sum: %d\n", result);

    return 0;
}
Example 2: Function with Parameters and Void Return Type
c
Copy code
#include <stdio.h>

// Function to add two numbers and print the result
void addAndPrint(int num1, int num2) {
    printf("Sum: %d\n", num1 + num2);
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Call the addAndPrint function
    addAndPrint(a, b);

    return 0;
}
Example 3: Function with Pointers
c
Copy code
#include <stdio.h>

// Function to add two numbers and store the result in a pointer variable
void addWithPointers(int num1, int num2, int *result) {
    *result = num1 + num2;
}

int main() {
    int a, b, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Call the addWithPointers function and pass the address of 'result'
    addWithPointers(a, b, &result);

    // Display the result
    printf("Sum: %d\n", result);

    return 0;
}