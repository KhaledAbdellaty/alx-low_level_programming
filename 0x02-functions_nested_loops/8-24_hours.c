#include"main.h"
/**
 * jack_bauer - a function that prints every minute
 *  of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
		hr++;
	}
}