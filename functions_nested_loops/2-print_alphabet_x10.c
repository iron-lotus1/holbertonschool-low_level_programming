#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
int i;
char let;
for (i = 0; i < 10; i++)
{
for (let = 'a'; let <= 'z'; let++)
{
_putchar(let);
}
_putchar('n');
}
}
