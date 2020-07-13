#include <stdio.h>
#ifndef __FILE__
#include __FILE__
#endif

/**
 * main - prints the file name
 * Return: 0;
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
