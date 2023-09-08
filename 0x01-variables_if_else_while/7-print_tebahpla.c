#include<stdio.h>
/**
 * main - start point
 *
 * Description: prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
