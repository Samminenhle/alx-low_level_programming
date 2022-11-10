#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: witdh of an array
 * @height: height of an array
 *
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array, a, b;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			array[a][b] = 0;

	return (array);
}
