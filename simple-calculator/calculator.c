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
printf("Add\n");
else if (option[0][0] == '2')
printf("Subtract\n");
else if (option[0][0] == '3')
printf("Multiply\n");
else if (option[0][0] == '4')
printf("Divide\n");
else if (option[0][0] == '0')
printf("Bye!\n");
else
printf("Invalid choice.\n");

return (0);


{

int num1 = 0;
int num2 = 0;
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 + num2);
printf("Result: %d", value);
return (0);
}
}
/**
* add - Adds two integers
* @a: The first integer
* @b: The second integer
* Return: The sum of a and b
*/
int add(void)
{
int num1 = 0;
int num2 = 0;
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 + num2);
printf("Result: %d", value);
return (0);
}
/**
* subtract - Subtracts two integers
* @a: The first integer
* @b: The second integer
* Return: The difference of a and b
*/
int subtract(void)
{
int num1 = 0;
int num2 = 0;
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 - num2);
printf("Result: %d", value);
return (0);
}
/**
* multiply - Multiplies two integers
* @a: The first integer
* @b: The second integer
* Return: The product of a and b
*/
int multiply(void)
{
int num1 = 0;
int num2 = 0;
printf("A: ");
scanf("%d", &num1);
printf("B: ");
scanf("%d", &num2);
int value = (num1 * num2);
printf("Result: %d", value);
return (0);
}
/**
* divide - Divides two floating-point numbers
* @a: The first number
* @b: The second number
* Return: The result of a divided by b
*/
int divide(void)
{
float num1 = 0.0;
float num2 = 0.0;
printf("A: ");
scanf("%2f", &num1); /* %f can be changed to %lf for double */
printf("B: ");
scanf("%2f", &num2);
float value = (num1 / num2);
printf("Result: %.2f", value); /* I changed it to a .2f as it was giving a null value for num2*/
return (0);
}















/*
* divide - Divides two floating-point numbers
* @a: The first number
* @b: The second number
* Return: The result of a divided by b
*/
