#include "main.h"

/**
 * state_checker_dig1 - digit flag checker
 * @format: char pointer to flag
 * @args: arguements
 * Return: current printing state
 */

int state_checker_dig1(const char *format, va_list args)
{
	char buf[BUF_SIZE];
	int counter = 0;
	int i;

	switch (*format)
		{
			case 'd':
			{
				int n = va_arg(args, int);

				no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++, counter++)
					_putchar(buf[i]);
				break;
			}
			case 'i':
			{
				unsigned int n = va_arg(args, unsigned int);

				no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++, counter++)
					_putchar(buf[i]);
				break;
			}
			default:
			{
				counter += state_checker_dig2(format, args);
				break;
			}
		}
	return (counter);
}
