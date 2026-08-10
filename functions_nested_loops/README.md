# C - Functions, nested Loop

## General
* [Nested loops](#Nested-Loops)
* [What is a function and how do you use functions](#functions)
* [Header files](#header-files)

## Nested Loops
Nested while loop in C refers to placing one while loop completely inside the body of another while loop.

The inner loop runs through all of its iterations every single time the outer loop completes one cycle. If the outer loop runs M times and the inner loop runs N times, the code inside the inner loop will execute a total of M × N times.

```c
while (condition1) {
    // Code executed during the outer loop

    while (condition2) {
        // Code executed during the inner loop
    }

    // More code executed during the outer loop
}
```
<br>

> Example
```c
#include <stdio.h>

int main() {
    int row = 1;

    // Outer loop controls rows
    while (row <= 3) {
        int col = 1; // Reset inner counter for each new row

        // Inner loop controls columns
        while (col <= 5) {
            printf("(%d,%d) ", row, col);
            col++; // Increment inner loop tracker
        }

        printf("\n"); // New line after completing a full row
        row++; // Increment outer loop tracker
    }

    return 0;
}

/* Output:
(1,1) (1,2) (1,3) (1,4) (1,5) 
(2,1) (2,2) (2,3) (2,4) (2,5) 
(3,1) (3,2) (3,3) (3,4) (3,5) 
*/
```
## Functions
The function is a block of code that can perform a specific task

> Function prototype
<br>
The declaration of a function that specifies functions name, parameters and return type. It does't contain function body.
<br>
Function prototype informs the compiler that the function may later be used in the program.

> Example Syntax
```c
returnType functionName(type1 arg1, type2 arg2, ...);
```
int addNumbers(int a, int b); is the function prototype which provides the following information to the compiler:
1) name of the function is addNumbers()
2) return type of the function is int
3) two arguments of type int are passed to the function
The function prototype is not needed if the user-defined function is defined before the *main()* function.

The function prototype is not needed if there is a defined function before the main() function

## Header files

A header file in C is a text file with a .h extension that contains function declarations, macros, data types, and constants shared across multiple source files.

To use a header file, you must include it at the top of your .c source file using the #include preprocessor directive.

```c
#include <stdio.h>  // Includes a system header file
#include "my_file.h" // Includes a user-defined header file
```

---