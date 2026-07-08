#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98 format
 * @n: char in use
 * Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
else
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("98\n");
}
