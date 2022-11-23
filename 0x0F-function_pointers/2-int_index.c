#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0
 * return -1if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
