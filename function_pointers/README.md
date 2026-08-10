# Function Pointers

function pointer in C is a variable that stores the memory address of executable code in the code segment, rather than storing the address of data

To declare a function pointer, the pointer’s signature must exactly match the targeted function's return type and parameter types
> Syntax
```c
return_type (*pointer_name)(parameter_types);
```
> example
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
  
    // Declare a function pointer that matches
  	// the signature of add() function
    int (*fptr)(int, int);

    // Assign to add()
    fptr = &add;

    // Call the function via ptr
    printf("%d", fptr(10, 5));
    return 0;
}
```


---

