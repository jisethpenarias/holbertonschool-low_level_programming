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
    land = []
    perimeter = 0

    for size in range(len(grid)):
        for width in range(len(grid[size])):
            if grid[size][width] == 1:
                land.append(1)
    # land = [1, 1, 1, 1, 1]
    if(len(land) == 1):
        perimeter = 4
        return perimeter

    for i in range(len(land)):
        if i == 0 or i == (len(land) - 1):
            perimeter += 3
        else:
            perimeter += 2

    return perimeter
