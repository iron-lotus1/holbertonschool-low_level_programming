/*#include "main.h"*/
#include <stdio.h>
/**
 * main - Prints a simple calculator menu
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char option[][50] = {"1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n"};

printf("SIMPLE CALCULATOR\n\n%s\n", option[0]);
printf("Choice: ");
scanf("%s", option[0]);

if (option[0][0] == '1')
printf("Add.\n");
else if (option[0][0] == '2')
printf("Subtract.\n");
else if (option[0][0] == '3')
printf("Multiply.\n");
else if (option[0][0] == '4')
printf("Divide.\n");
else if (option[0][0] == '0')
printf("Bye!\n");
else
printf("Invalid choice.\n");

return (0);
}
