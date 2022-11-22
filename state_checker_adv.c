#include "main.h"

/**
 * state_checker_adv - checkes print state for p and o
 * @format: string character
 * @args: arguements
 * Return: last saved state of print
 */

int state_checker_adv(const char *format, va_list args)
{
	int i, counter = 0;
	char buf[BUF_SIZE];

	switch (*format)
	{
		case 'p':
		{
			void *n = va_arg(args, void *);

			_putchar('0');
			_putchar('x');
			unsigned_no_to_str((uint64_t) n, 16, buf);
			for (i = 0; buf[i]; i++, counter++)
				_putchar(buf[i]);
			break;
		}
		case 'o':
		{
			unsigned int n = va_arg(args, unsigned int);

			unsigned_no_to_str(n, 8, buf);
			for (i = 0; buf[i]; i++, counter++)
				_putchar(buf[i]);
			break;
		}
		default:
		{
			counter += state_checker_default(format, args);
			break;
		}
	}
	return (counter);
}


/**
 * state_checker_default - returns print state for b and default
 * @format: string character
 * @args: arguements
 * Return: last saved state of print
 */

int state_checker_default(const char *format, va_list args)
{
	int i, counter = 0;
	char buf[BUF_SIZE];

	switch (*format)
	{
		case 'b':
		{
			unsigned int n = va_arg(args, unsigned int);

			no_to_str(n, 2, buf);
			for (i = 0; buf[i]; i++, counter++)
				_putchar(buf[i]);
			break;
		}
		case 'X':
		{
			unsigned int n = va_arg(args, unsigned int);

			no_to_str(n, 16, buf);
			for (i = 0; buf[i]; i++, counter++)
				_putchar(buf[i]);
			break;
		}
		default:
		{
			_putchar('%');
			_putchar(*format);
			counter++;
			break;
		}
	}
	return (counter);
}
