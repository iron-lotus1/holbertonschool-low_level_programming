#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers here */
/*
 * main - entry point
 *
 * Return - Always (0) (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0){
	printf("%lu is positive\n");
	}
	else {
		printf("%lu is negative\n");
	return (0);}}
