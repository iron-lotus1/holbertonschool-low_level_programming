#include "main.h"
#include <unistd.h>
/**
* print_triangle - Prints triangle, followed by newline
* @size: Size of triangle
* Return
*/
void print_triangle(int size)
{
int row;
int spaces;
int hashes;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces > 0; spaces++)
{
_putchar(' ');
}
{
_putchar('#');
}
_putchar('\n');
}
}
