#include "main.h"
#include <unistd.h>
/**
* print_triangle - Prints triangle, followed by newline
* @size: Size of triangle
* Return
*/
void print_triangle(int size)
{
int row, hashes;
if (size > 0)
{
for (hashes = 1; hashes <= size; hashes++)
{
for (row = size - hashes; row > 0; row++)
_putchar(' ');
for (row = 0; row < hashes; row++)
_putchar('#');
if (hashes == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
