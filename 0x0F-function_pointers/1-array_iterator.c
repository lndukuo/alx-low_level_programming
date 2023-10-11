#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
