#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 *
 * @grid: the 2D array to free
 * @height: the height of the array
 *
 * Description: This function frees the memory allocated for a 2D array.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}

