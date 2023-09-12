#include "main.h"
/**
 * _isalpha - checks for alphabetical characters
 * @c: takes input from other functions.
 * Return: 1 if c is alphabetical character and 0 if else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}
