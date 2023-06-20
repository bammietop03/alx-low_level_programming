#include "main.h"
/**
 * jack_bauer - prints every minute of day of Jack bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hr, hr2, min, min2;

	for (hr = '0'; hr < '3'; hr++)
	{
		for (hr2 = '0'; hr2 < '9'; hr++)
		{
			for (min = '0'; min < '6'; min++)
			{
				for (min2 = '0'; min2 <= '9'; min2++)
				{
					_putchar(hr);
					_putchar(hr2);
					_putchar(':');
					_putchar(min);
					_putchar(min2);
					_putchar('\n');

					if (hr == '2' && hr2 == '3' && min == '5' && min2 == '9')
					{
						break;
					}
				}
			}
		}
	}

}
