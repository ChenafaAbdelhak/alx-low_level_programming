#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + (hours / 10)); /* Print tens digit of hours */
			_putchar('0' + (hours % 10)); /* Print ones digit of hours */
			_putchar(':'); /* Print colon separator */
			_putchar('0' + (minutes / 10)); /* Print tens digit of minutes */
			_putchar('0' + (minutes % 10)); /* Print ones digit of minutes */
			_putchar('\n'); /* Print newline */
		}
	}
}
