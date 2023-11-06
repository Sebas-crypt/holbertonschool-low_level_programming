#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: the 2 dimensional array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < heightl i++)
		free(grid[i]);
	free(grid);
}
