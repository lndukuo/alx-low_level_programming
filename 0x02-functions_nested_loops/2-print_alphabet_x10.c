#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet letters x10
 *
 *
 * Return: no return
 *
 */
void print_alphabet_x10(void)
{
	int num, ch;

	for (num = 0; num <= 9; ++num)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n')
	}
}
