#!/usr/bin/python3
""" This is a comment """


def island_perimeter(grid):
    """ This is another comment """
    peri = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if i == 0:
                    peri += 1
                elif grid[i - 1][j] != 1:
                    peri += 1
                if j == 0:
                    peri += 1
                elif grid[i][j - 1] != 1:
                    peri += 1
                if i >= (len(grid) - 1):
                    peri += 1
                elif grid[i + 1][j] != 1:
                    peri += 1
                if j >= (len(grid[i]) - 1):
                    peri += 1
                elif grid[i][j + 1] != 1:
                    peri += 1
    return peri
