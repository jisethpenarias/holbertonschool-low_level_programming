#include "holberton.h"

/**
*print_alphabet_x10 - function print alphabet 10 times
*
*Return: 0
*/
void print_alphabet_x10(void)
{
int counter;
char l;
l = 'a';
counter = 0;

while (counter <= 9)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
counter++;
_putchar('\n');
}
return;
}
