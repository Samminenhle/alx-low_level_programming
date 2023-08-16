#include <stdio.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @size: the size of an array
 * @action: a pointer to the function you need to use
 * @array: used to excecute a function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
        size_t i;

        if (array && action)
        {
                i = 0;
                while (i < size)
                {
                        action(array[i]);
                        i++;
                }
        }
}
