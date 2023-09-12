#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 * @y: the number asked
 * Return: the last digit.
 */
int print_last_digit(int y)
{
	int last_digit = y % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
