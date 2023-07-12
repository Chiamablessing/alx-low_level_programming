#include "main.h"
/**
 * argstostr - concatenates arguments from the terminal
 * @ac: argument count
 * @av: terminal arguments
 * Return: returns NULL on error and concatenated array on success
 *
 */

char *argstostr(int ac, char **av)
{
	 int total_length, i, index;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	 total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(&result[index], av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
