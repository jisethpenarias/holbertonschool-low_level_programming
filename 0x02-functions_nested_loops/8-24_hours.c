#include "holberton.h"

/**
 *jack_bauer - function print hours
 *
 */
void jack_bauer(void)
{
int hoursone;
int hourstwo;
int minutesone;
int minutestwo;

hoursone = 0;
while (hoursone <= 2)
{
hourstwo = 0;
while (hourstwo <= 9)
{
if (hoursone != 2 || hourstwo <= 3)
{
minutesone = 0;
while (minutesone <= 5)
{
minutestwo = 0;
while (minutestwo <= 9)
{
_putchar(hoursone + 48);
_putchar(hourstwo + 48);
_putchar(58);
_putchar(minutesone + 48);
_putchar(minutestwo + 48);
_putchar ('\n');
minutestwo++;
}
minutesone++;
}
}
hourstwo++;
}
hoursone++;
}
return;
}
