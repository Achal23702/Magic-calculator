// #include <stdio.h>

// int globalVar = 20;  // globalVar is a global variable

// void exampleFunction() {
//     printf("%d\n", globalVar);
// }

// int main() {
//     exampleFunction();
//     printf("%d\n", globalVar);  // globalVar can be accessed outside the function
//     return 0;
// }

#include <stdio.h>
 
void exampleFunction() {
    int x = 10;  // x is a local variable
    printf("%d\n", x);
    
}

int main() {
    exampleFunction();
    //printf("%d\n", x);  // This would result in an error since x is not defined in this scope
    return 0;
}