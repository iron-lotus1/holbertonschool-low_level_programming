#include "main.h"
#include <stdio.h>
/**
* print_square - Prints a square of a given size
* @size: the width and Height
* Return:
*/
void print_square(int size)
{
int row;
int col;
{
_putchar('\n');
return;
}
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}