#!/usr/bin/python3
"""Creates an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimiter of an island.

    Args:
        grid (list of lists): A list of integers representing an island.
        The perimeter of the island defined by the  grid is returned.
    """
    w = len(grid[0])
    h = len(grid)

    for i in range(h):
        for j in range(w):
            if grid[i][j] > 0:
                s += 1
                if (i > 0 and grid[i - 1][j] > 0):
                    e += 1
                if (j > 0 and grid[i][j - 1] > 0):
                    e += 1

    p = s * 4 - e * 2
    return p
