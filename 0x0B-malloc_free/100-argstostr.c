#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int x, y, z, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		s = av[x];
		y = 0;

		while (s[y++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < len; x++)
	{
		s = av[x];
		z = 0;

		while (s[z])
		{
			str[y] = s[z];
			z++;
			y++;
		}
		str[y++] = '\n';
	}
	str[y] = '\0';

	return (str);
}
