#include "main.h"
/**
 * alloc_grid - allocates memory to a 2 dimensional array
 * @width: int parameter(width of the given array)
 * @height: int parameter(height of the given array)
 * Return: NULL if with 0r height <= 0 or arr == NULL and
 * on success returns arr
 *
 */
int **alloc_grid(int width, int height)
{
	int wi, he, **arr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (he = 0; he < height; he++)
	{
		arr[he] = malloc(sizeof(int) * width);
		if (arr[he] == NULL)
		{
			for (; he >= 0; he--)
			{
				free(arr[he]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (he = 0; he < height; he++)
	{

		for (wi = 0; wi < width; wi++)
		{
			arr[he][wi] = 0;
		}
	}
	return (arr);
}
