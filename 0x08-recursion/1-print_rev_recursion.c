#include "main.h"
/**
 * _print_rev_recursion - prints a reversed string
 * @s: points to the string
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
