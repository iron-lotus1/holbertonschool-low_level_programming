#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 or else 0 otherwise -1
 */
int print_sign(int n)
{
if (n > 0)
{
write(1, "+", 1);
return (1);
}
else if (n == 0)
{
write(1, "0", 1);
return (0);
}
else
{
write(1, "-", 1);
return (-1);
}
}
