#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and int it with a specific char
 * @size: Size of array to be allocated
 * @c: Char
 * Return: Pointer to allocated array or NULL if size is 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
