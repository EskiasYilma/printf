#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * state_checker_dig1 - digit flag checker
 * @format: char pointer to flag
 * @args: arguements
 * Return: current printing state
 */

int state_checker_dig1(const char *format, va_list args)
{
	char buf[65];
	int state = 1;
	int i;

	switch (*format)
		{
			case 'd':
			{
				int n = va_arg(args, int);

				no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++)
					_putchar(buf[i]);
				state = 0;
				break;
			}
			case 'i':
			{
				int n = va_arg(args, int);

				no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++)
					_putchar(buf[i]);
				state = 0;
				break;
			}
			default:
			{
				state = state_checker_dig2(format, args);
				break;
			}

		}
	return (state);
}
