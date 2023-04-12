#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2D array, NULL on failure or if height or width <= 0
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for the rows */
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	/* allocate memory for the columns in each row */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			/* free previously allocated memory and return NULL */
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	/* initialize all elements to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

