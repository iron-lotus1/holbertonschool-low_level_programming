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
char symbol = '#';
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar("%c", symbol);
}
_putchar('\n');
}
}
