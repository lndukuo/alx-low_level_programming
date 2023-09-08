#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start orentry point of the programm
 *
 * Descripition: print the value of n status(Positive,Negative,Zero)
 *
 * Return: its always 0 (Success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* additional code */
				if (n > 0)
					printf("%i is positive\n", n);
				else if (n == 0)
					printf("%i is zero\n", n);
				else
					printf("%i is negative\n", n);

					return (0);
}
