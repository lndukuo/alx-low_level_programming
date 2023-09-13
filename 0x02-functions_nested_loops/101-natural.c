#include <stdio.h>
/**
 * main - programs start point
 * Return: 0 always (success)
 */
int main(void)
{
	int i, sum = 0;
		for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
