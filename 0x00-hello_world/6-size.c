#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description - size of function
 *
 * Return: is always 0 (Success)
 */
int main(void)
{

		/* sizeof evaluates the size of a variable */
		printf("Size of a char: %lu byte(s)\n", sizeof(char));
			printf("Size of an int: %lu byte(s)\n", sizeof(int));
				printf("Size of an double: %lu byte(s)\n", sizeof(double));
					printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
						printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
							printf("Size of a float: %lu byte(s)\n", sizeof(float));

								return (0);

}
