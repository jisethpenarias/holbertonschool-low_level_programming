#include "holberton.h"

/**
 *times_table - function print last digitimes tablet
 *
 *Return: 0
 */

void times_table(void)
{
int i;
int valueToPrint;
int repetitions = 0;

while (repetitions <= 9)
{
for (i = 0; i <= 9; i++)
{
valueToPrint = i * repetitions;
if ((valueToPrint) > 9)
{
_putchar(48 + (valueToPrint / 10));
_putchar(48 + (valueToPrint % 10));
}
else
{
if (i != 0)
{
_putchar(32);
}
_putchar(48 + valueToPrint);
}
if (i != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
repetitions++;
}
return;
}
