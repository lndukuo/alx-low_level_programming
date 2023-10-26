#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary string
 *
 * Return: the converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b == '1')
			result += 1;
		b++;
	}
	return (result);
}
