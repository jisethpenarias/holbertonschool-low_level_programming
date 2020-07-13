#include <stdio.h>
#ifndef __FILE__
#include __FILE__
#endif

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
