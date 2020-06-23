#include "holberton.h"

/**
 * swap_int - swap of integer values.
 *
 *@a: variable with value 98.
 *@b: variable with value 42.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int temporary = *a;

*a = *b;
*b = temporary;
}
