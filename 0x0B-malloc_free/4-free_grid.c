#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This Function concatenates.
 * @grid: first param.
 * @height: second param.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height = height; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
