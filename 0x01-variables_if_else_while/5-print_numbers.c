#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		printf("%d", h);
	}
	putchar('\n');
	return (0);
}

