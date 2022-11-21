#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * state_checker_adv - checkes print state for p, o and b
 * @format: string character
 * @args: arguements
 * Return: last saved state of print
 */

int state_checker_adv(const char *format, va_list args)
{
	int i, state = 1;
	char buf[65];

	switch (*format)
	{
		case 'p':
		{
			void *n = va_arg(args, void *);

			_putchar('0');
			_putchar('x');
			unsigned_no_to_str((uint64_t) n, 16, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			state = 0;
			break;
		}
		case 'o':
		{
			unsigned int n = va_arg(args, int);

			unsigned_no_to_str(n, 8, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			state = 0;
			break;
		}
		case 'b':
		{
			int n = va_arg(args, int);

			no_to_str(n, 2, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			state = 0;
			break;
		}
		state = 0;
	}
	return (state);
}
