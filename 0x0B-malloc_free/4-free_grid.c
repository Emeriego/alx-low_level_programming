#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This Function concatenates.
 * @grid: first param.
 * @height: second param.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; height >= i; i++)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
