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
	int state = 1;
	int i;

	switch (*format)
		{
			case 'd':
			{
				unsigned int n = va_arg(args, unsigned int);

				print_number(n);
				/**
				 * no_to_str(n, 10, buf);
				 * for (i = 0; buf[i]; i++)
				 * _putchar(buf[i]);
				 */

				state = 0;
				break;
			}
			case 'i':
			{
				unsigned int n = va_arg(args, unsigned int);

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
			state = 0;

		}
	return (state);
}
