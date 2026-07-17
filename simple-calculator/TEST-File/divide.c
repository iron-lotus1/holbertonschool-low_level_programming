//#include "main.h"
#include <stdio.h>
/**
*
*
*
*/
int main(void)
{
float num1 = 0.0;
float num2 = 0.0;
printf("A: ");
scanf("%2f", &num1); /* %f can be changed to %lf for double */
printf("B: ");
scanf("%2f", &num2);
float value = (num1 / num2);
printf("Result: %.2f", value);
return (0);
}
