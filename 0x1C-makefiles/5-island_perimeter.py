#!/usr/bin/python3

"""
island_perimeter module
"""


def island_perimeter(grid):
    """island_perimeter function """
    m = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] != 1:
                    m += 1
                if i == len(grid) - 1 or grid[i+1][j] != 1:
                    m += 1
                if j == 0 or grid[i][j-1] != 1:
                    m += 1
                if j == len(grid[i]) - 1 or grid[i][j+1] != 1:
                    m += 1
    return (m)
