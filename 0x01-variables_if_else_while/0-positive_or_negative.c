#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Starting point
 *
 * Description - Print value status of n (Positive, negative or zero)
 *
 * Return: is Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*My code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
