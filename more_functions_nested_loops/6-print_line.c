#include "main.h"
#include <unistd.h>
/**
* print_line - function that draws a strait line in terminal
* @n: The num of times the character _ should be printed
* Return: Always (0) (Success)
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
