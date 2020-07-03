#include "holberton.h"
#include <stdio.h>

/**
 * primeNumber - blank
 * @n: checkl
 * @x: incremenbt
 * Return: blank
 */


int primeNumber(int n, int x)
{
if (n % x == 0)
{
return (0);
}
else if (x < n / 2)
{
return (1);
}
return (primeNumber(n, x + 1));
}

/**
 *is_prime_number - input integer is a prime number.
* @n: number.
* Return: blank.
*/

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (primeNumber(n, 2));
}
