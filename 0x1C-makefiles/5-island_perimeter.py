#!/usr/bin/python3

"""
island_perimeter module
"""


def island_perimeter(grid):
    """island_perimeter function """
    m = 0
    for i_line, line in enumerate(grid):
        for j_col, col in enumerate(line):
            if col == 1:
                if j_col - 1 >= 0 and grid[i_line][j_col - 1] == 0:
                    m += 1
                if j_col + 1 < len(grid[i_line]) and grid[i_line][j_col + 1] \
                == 0:
                    m += 1
                if i_line - 1 >= 0 and grid[i_line - 1][j_col] == 0:
                    m += 1
                if i_line + 1 < len(grid) and grid[i_line + 1][j_col] == 0:
                    m += 1
    return (m)
