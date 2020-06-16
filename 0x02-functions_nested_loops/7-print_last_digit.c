#include "holberton.h"

/**
 *print_last_digit - function print last digit
 *@r: number to check
 *
 *Return: lasDigit
 */
int print_last_digit(int r)
{
int lastDigit;
int asciiLastDigit;

lastDigit = r % 10;
if (lastDigit < 0)
{
lastDigit = lastDigit * -1;
}
asciiLastDigit = 48 + lastDigit;
_putchar(asciiLastDigit);
return (asciiLastDigit - 48);
}
