#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - removing dynamic memory allocation
* @grid: grid pointer
* @height: height param
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
