#!/usr/bin/python3
"""
Defines a function that calculates perimeter
"""

def island_perimeter(grid):
    """
    Returns the perimeter of an 'island'
    """
    longitude = len(grid[0])
    latitude = len(grid)

    num_edges = sum(grid[i][j] == 1 and (j > 0 and grid[i][j - 1] == 1)
                    for i in range(latitude) for j in range(longitude))
    num_edges += sum(grid[i][j] == 1 and (i > 0 and grid[i - 1][j] == 1)
                      for i in range(latitude) for j in range(longitude))

    num_cells = sum(row.count(1) for row in grid)

    return num_cells * 4 - num_edges * 2
