#include "main.h"

/***
* Prototype: void jack_bauer(void);
* You can listen to this soundtrack while coding :)
*/

void jack_bauer(void)
{
int a, b, c, d;

   {
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
}
