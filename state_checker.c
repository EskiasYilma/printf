#include "main.h"

/**
 * state_checker - checks for escape characters
 * @format: escape character format
 * @args: arguements
 * Return: last saved state
 */


int state_checker(const char *format, va_list args)
{
	char ch;
	int state = 1;

	switch (*format)
		{
			case 'c':
			{
				ch = va_arg(args, int);

				_putchar(ch);
				break;
			}
			case 's':
			{
				const char *x = va_arg(args, const char *);

				if (x == NULL)
					x = "(null)";
				else if (*x == '\0')
					return (-1);
				flag_str(x);
				break;
			}
			case '%':
			{
				_putchar('%');
				break;
			}
			default:
			{
				state = state_checker_dig1(format, args);
				break;
			}
			break;
		}
	state = 0;
	return (state);
}
