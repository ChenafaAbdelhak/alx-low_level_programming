#include <stdlib.h>

/**
 *argstostr - Concatenates all the arguments of a program.
 *@ac: Argument count.
 *@av: Argument vector.
 *
 *Return: Pointer to an array of characters.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	result = (char*) malloc((total_length + 1) *sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}

		result[k] = '\n';
		k++;
	}

	result[k] = '\0';

	return (result);
}
