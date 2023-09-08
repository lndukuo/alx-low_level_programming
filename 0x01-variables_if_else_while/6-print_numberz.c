#include <stdio.h>
/**
 * main - Start of the program
 *
 * Description: Print numbers 0 to 9 using putchar
 *
 * Return: is always 0 (success)
 *
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}
