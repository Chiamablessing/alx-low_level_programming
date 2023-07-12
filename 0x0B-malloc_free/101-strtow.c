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
	int i, j = 1, len = strlen(str);

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; i < len; i++)
	{
		/**
		 * if (str[i] == " ")
		 * 	continue;
		 * *else*
		 */
		j++;
	}
	arr = malloc(sizeof(char) * j);
	if (arr == NULL)
		return (NULL);

	/**
	 * arr = strtok(str, " ");
	 */
	return (arr);
}
