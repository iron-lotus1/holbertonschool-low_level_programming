#include "main.h"
#include <unistd.h>
/**
* print_triangle - Prints triangle, followed by newline
* @size: Size of triangle
* Return
*/
void print_triangle(int size)
{
int row, spaces, hashes;
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
for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
