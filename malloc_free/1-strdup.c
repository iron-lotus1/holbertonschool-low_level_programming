#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: string to duplicate 
 * Return: returns pointer to the duplicated string - return NULL if insufficient mem
 *
 */
char *_strdup(char *str)
{
	char *astr;
	unsigned int len - 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
	len++;
	}
	astr = malloc((len + 1) * sizeof(char));
	if (astr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		astr[i] = str[i];
	}
	return (astr);
}
