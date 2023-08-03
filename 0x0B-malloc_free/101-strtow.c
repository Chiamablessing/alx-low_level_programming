#include "main.h"
/**
 * strtow - splits strings into words
 * @str: string to be split
 * Return: returns NULL on error and a pointer to an array on success
 *
 */
char **strtow(char *str)
{
	char **arr;
	int i, j = 0, len = strlen(str);

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			j++;
	}
	j++;

	arr = malloc((j + 1) * sizeof(char*));
	if (arr == NULL)
		return (NULL);

	/**
	 * arr = strtok(str, " ");
	 */

	return (arr);
}
