/*#include "main.h"*/
#include <stdio.h>
/**
 * main - Prints a simple calculator menu
 * @a: The first integer
 * @b: The second integer
 * divide - Divides two floating-point numbers
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char option[][50] = {"1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n"};
int num1 = 0;
int num2 = 0;
printf("SIMPLE CALCULATOR\n\n%s\n", option[0]);
printf("Choice: ");
scanf("%s", option[0]);
while (option[0][0] == '1')
{
printf("Add\n");
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 + num2);
printf("Result: %d\n", value);
}
while (option[0][0] == '2')
{
printf("Subtract\n");
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 - num2);
printf("Result: %d\n", value);
}
while (option[0][0] == '3')
{
printf("Multiply\n");
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 * num2);
printf("Result: %d\n", value);
}
while (option[0][0] == '4')
{
printf("Divide\n");
float num1 = 0.0;
float num2 = 0.0;
printf("A: ");
scanf("%2f", &num1); /* %f can be changed to %lf for double */
printf("B: ");
scanf("%2f", &num2);
float value = (num1 / num2);
printf("Result: %.2f\n", value); /* I changed it to a .2f as it was giving a null value for num2*/
}
while (option[0][0] == '0')
{
printf("Bye!\n");
break;
}
return (0);
}
