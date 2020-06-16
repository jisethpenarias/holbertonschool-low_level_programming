#include "holberton.h"

/**
*print_alphabet - function print alphabet
*
*Return: 0
*/
void print_alphabet(void)
{
char l;
l = 'a';

while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
return;
}
