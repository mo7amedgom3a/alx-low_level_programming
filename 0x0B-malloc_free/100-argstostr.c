#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program
 *
 * @ac: Argument total count
 *
 * @av: Pointer to arguments
 *
 * Return: Pointer to concatenated string (SUCCESS) or
 * NULL if @ac == 0 or @av == NULL (FAILURE) or
 * NULL if if insufficient memory was available (FAILURE)
 */
char *argstostr(int ac, char **av)
{
	int counter = 0, j, i, c1 = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;

		counter++;
	}

	str = malloc(counter + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[c1++] = av[i][j];
		str[c1++] = '\n';
	}

	str[counter] = '\0';
	return (str);
}
