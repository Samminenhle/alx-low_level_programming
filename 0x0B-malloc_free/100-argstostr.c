#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: arg count
 * @av: arg vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int a, b, t, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		b = 0;

		while (s[b++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		s = av[a];
		t = 0;

		while (s[t])
		{
			str[b] = s[t];
			t++;
			b++;
		}
		str[b++] = '\n';
	}
	str[b] = '\0';

	return (str);
}
