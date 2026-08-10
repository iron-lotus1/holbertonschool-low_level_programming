# Variables, if, else, while

## if, if ... else

* *if* statements are used when the line of code is of **TRUE** format.
* *else* statement is used when the line is of a **FALSE** format.
* *else if* statement is used to specify a new condition to test, if the first condition is **FALSE**

> Syntax
```c
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if condition1 is false and condition2 is true
} else {
  // block of code to be executed if both conditions are false
}

```
```c
int time = 16;

if (time < 12) {
  printf("Good morning.");
} else if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}

// Outputs "Good day."
```
---
## while loop

While is a code block that repeats as long as a true condition is kept. It keeps checking until a condition becomes false.
> Syntax
```c
while(condition) {
    statement(s);
}
```
Condition: a logical expression that evaluates to true(1) or false (0)
Statement: is the body of code that will be used. This code will be place inside the curly braces {} and is executed on every successful iteration 
> Example

```c
#include <stdio.h>

int main(void)
{
    int a = 0; // local variable definition

    while(a < 10) // while loop execution
    {
        printf("value of a : %d\n", a);
        a++; // Incrementing the loop variable
    }
    return (0);
}
```

> Summary 
---
| Concept | Purpose | Basic Syntax|
| --- | --- | --- |
| **if / else** | *Make logic decisions* | if (condition) {...} else {...}|
| **while** | *Repeat code blocks* | while (condition) {...}|
---

## Boolean

Boolean refers to the data types that can only have 2 values
* YES / NO
* ON / OFF
* TRUE / FALSE

The boolean variable is declared with the *bool keyword* and the values *TRUE* or *FALSE*.<br>
For this to work, you will need to add the bool header.<br>
```c
#include <stdbool.h>
```
Before trying to print the boolean variables, you should know that boolean values are returned as integers:
* 1 (or any other number that is not 0) represents true
* 0 represents false
Therefore, you can use the %d format specifier to print a boolean value:

> example
```c
// Create boolean variables
bool isProgrammingFun = true;
bool isFishTasty = false;

// Print boolean values
printf("%d", isProgrammingFun);   // Prints 1 (true)
printf("%d", isFishTasty);        // Prints 0 (false)
```

## Logical Operators in C

Logical operators in C are tokens used to combine or invert multiple conditions, returning either 1 (true) or 0 (false). In the C programming language, any non-zero value is treated as true, while zero is treated as false.

> Logical Operators

| Operator | Name | Syntax EXAMPLE | Behavior|
| --- | --- | --- | --- |
| && | Logical AND| expr1 && expr2 | Returns 1 only if both expressions are true. else returns 0|
| \|\| | Logical OR| expr1 \|\| expr2 | Returns 1 if at least one expression is true. Returns 0 only if both are false|
| ! | Logical NOT | !expr | Inverts the truth value. Returns 1 if false, and 0 if true |\
<br>
> example AND (&&)

```c
#include <stdio.h>

int main() {
    int age = 22;
    int has_license = 1; // 1 represents True

    if (age >= 18 && has_license) {
        printf("You are allowed to drive.\n");
    }
    return 0;
}
```
<br>

> example OR ( || )
```c
#include <stdio.h>

int main() {
    int is_weekend = 1;
    int has_holiday = 0;

    if (is_weekend || has_holiday) {
        printf("You can sleep in today!\n");
    }
    return 0;
}
```
<br>

> example NOT (!)
```c
#include <stdio.h>

int main() {
    int is_logged_in = 0; // 0 represents False

    if (!is_logged_in) {
        printf("Please log in to continue.\n");
    }
    return 0;
}
```

## Relational Operators
Relational operators in C are used to compare two values or expressions to determine their relationship. They are binary operators that require two operands and always return an integer value: 1 for true and 0 for false. These operators serve as foundational elements for decision-making and flow control structures like if statements and loops

> Relational Operators 

| Operator | Name | Example | Result <br>if a = 10, b = 20 | Behavior |
|---|---|---|---|---|
| == | Equal to | a == b | 0 (False)|  Checks if the left operand equals the right operand. |
| != | Not equal to | a != b | 1 (True)| Checks if the left operand does not equal the right operand. |
| > | Greater than | a > b | 0 (False)| Checks if the left operand is strictly larger than the right operand.|
| < | Less than | a < b  | 1 (True) | Checks if the left operand is strictly smaller than the right operand.|
| >= | Greater than or equal to | a >= b| 0 (False)| Checks if the left operand is larger than or equal to the right operand.|
| <= | Less than or equal to | a <= b |  1 (True)| Checks if the left operand is smaller than or equal to the right operand.|
<br>
> Example

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 4;

    // greater than example
    if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is less than or equal to b\n");

    // greater than equal to
    if (a >= b)
        printf("a is greater than or equal to b\n");
    else
        printf("a is lesser than b\n");

    // less than example
    if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than or equal to b\n");

    // lesser than equal to
    if (a <= b)
        printf("a is lesser than or equal to b\n");
    else
        printf("a is greater than b\n");

    // equal to
    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");

    // not equal to
    if (a != b)
        printf("a is not equal to b\n");
    else
        printf("a is equal b\n");

    return 0;
}
```