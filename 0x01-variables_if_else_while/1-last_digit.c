#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - A program will assign a random number to the variable n
 * return 0: (success)
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (last > 5)
	{printf("Last digit of %d is %d and is greater than 5\n", n, last); }
	if (last == 0)
	{prinf("Last digit of %d is %d and is 0\n", n, last); }
	if (last < 6 && != 0)
	{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last); }
	/* your code goes there */
	return (0);
}
