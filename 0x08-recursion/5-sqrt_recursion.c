#include "holberton.h"
#include <stdio.h>

/**
 * calculatingroot2 - calculatingroot2
 * @n: number _sqrt_recursion
 * @i: incrementor
 * Return: -1;
 */

int calculatingroot2(int n, int i)
{
if (n / i == i && n % i == 0)
return (i);
else if (n > (i * i))
return (calculatingroot2(n, i + 1));
else
return (-1);
}

/**
 *_sqrt_recursion - blank
* @n: blank
* Return: balnk
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (calculatingroot2(n, 1));
}
