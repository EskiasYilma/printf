#include "main.h"

/**
 * state_checker_dig2 - checks for flags u, x, X
 * @format: character string
 * @args: arguements
 * Return: last saved printing state
 */

int state_checker_dig2(const char *format, va_list args)
{
	int i, counter = 0;
	char buf[BUF_SIZE];

	switch (*format)
	{
		case 'u':
			{
				unsigned int n = va_arg(args, unsigned int);

				unsigned_no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++, counter++)
					_putchar(buf[i]);
				break;
			}
		case 'x':
			{
				unsigned int n = va_arg(args, unsigned int);

				unsigned_no_to_str(n, 16, buf);
				for (i = 0; buf[i]; i++, counter++)
					_putchar(buf[i]);
				break;
			}
		default:
		{
			counter += state_checker_adv(format, args);
			break;
		}
	}
	return (counter);
}
