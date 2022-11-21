#include "main.h"

/**
 * state_checker_adv - checkes print state for p and o
 * @format: string character
 * @args: arguements
 * Return: last saved state of print
 */

int state_checker_adv(const char *format, va_list args)
{
	int i, state = 1;
	char buf[BUF_SIZE];

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
			unsigned int n = va_arg(args, unsigned int);

			unsigned_no_to_str(n, 8, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			state = 0;
			break;
		}
		default:
		{
			state = state_checker_default(format, args);
			break;
		}
		state = 0;
		break;
	}
	return (state);
}


/**
 * state_checker_default - returns print state for b and default
 * @format: string character
 * @args: arguements
 * Return: last saved state of print
 */

int state_checker_default(const char *format, va_list args)
{
	int i, state = 1;
	char buf[65];

	switch (*format)
	{
		case 'b':
		{
			unsigned int n = va_arg(args, unsigned int);

			no_to_str(n, 2, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			break;
		}
		case 'X':
		{
			unsigned int n = va_arg(args, unsigned int);

			no_to_str(n, 16, buf);
			for (i = 0; buf[i]; i++)
				_putchar(buf[i]);
			break;
		}
		default:
		{
			_putchar('%');
			_putchar(*format);
			break;
		}
		state = 0;
		break;
	}
	return (state);
}
