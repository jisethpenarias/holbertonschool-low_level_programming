#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */

int main(void)
{
int number;
int secondNumber;
number = 48;
secondNumber = 48;
int iterator = 0;

while (number <= 57)
{
secondNumber = 48 + iterator;
while (secondNumber <= 57)
{
if (number != secondNumber)
{
putchar(number);
putchar(secondNumber);
if (number != 56 || secondNumber != 57)
{
putchar(44);
putchar(32);
}
}
secondNumber++;
}
number++;
iterator++;
}
putchar('\n');
return (0);
}
