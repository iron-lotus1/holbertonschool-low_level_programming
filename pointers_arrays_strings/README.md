# Pointers, Arrays, and Strings

## Pointers
C pointer is the derived data type that is used to store the address of another variable and can also be used to access and manipulate the variable's data stored at that location. The pointers are considered as derived data types.
* Store a memory address instead of a direct value.
* Can change value to point to different memory locations.
* Use * to look up the value at the address (dereference)



## Arrays
Arrays in C are a kind of data structure that can store a fixed-size sequential collection of elements of the same data type. 
* Store a fixed number of items of the same type in a row.
* The name of the array acts as a pointer to its first item.
* Cannot change location or resize once made

Declaration of an Array in C
---
declare an array in C, you need to specify the type of the elements and the number of elements to be stored in it

> syntax to declare an Array
```c
type arrayName[size];
```
size must be an integer constant greater than zero<br>
type can be any valid C data type

Initialization of an Array in C
---
you can initialize it by providing the set of comma-separated values enclosed within the curly braces {}.
> Syntax to Initialize Array

```c
data_type array_name [size] = {value1, value2, value3, ...};
```


---

## Strings
String in C is a one-dimensional array of char type, with the last character in the array being a "null character" represented by '\0'.
* Formed by grouping text characters in an array.
* Always finish with a hidden null terminator (\0) to show where the text ends.
* Can be read using a character array (char str[]) or a character pointer (char *str).

> Example
```c
#include <stdio.h>
#include <string.h>

int main (){

   char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

   for (int i = 0; i < 5; i++) {
      printf("%c", greeting[i]);
   }

   return 0;
}
```