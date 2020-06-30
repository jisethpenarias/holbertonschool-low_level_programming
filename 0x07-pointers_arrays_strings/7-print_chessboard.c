#include "holberton.h"

/**
 * *print_chessboard - prints the chessboard.
 *
 * @a: string.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

i = 0;

for (; a[i] != '\0'; i++)
{
if (i == 8)
break;

j = 0;
for (; a[i][j] != '\0'; j++)
{
_putchar(a[i][j]);
if (j == 7)
break;
}
if (i != 7)
_putchar('\n');
}
}
