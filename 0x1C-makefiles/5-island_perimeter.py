#!/usr/bin/python3
""" island_perimeter module """


def island_perimeter(grid):
    """
    Calculating the perimeter of an island

    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100

    if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    """
    perimeter = 0

    for row in range(len(grid)):
        for position in range(len(grid[row])):
            if grid[row][position] == 1:
                if row - 1 == 0 or grid[row - 1][position] == 0:
                    perimeter += 1
                if row + 1 == len(grid) or grid[row + 1][position] == 0:
                    perimeter += 1
                if position - 1 == 0 or grid[row][position - 1] == 0:
                    perimeter += 1
                if position + 1 == len(grid[row]) or grid[row][position + 1] == 0:
                    perimeter += 1
    return perimeter
