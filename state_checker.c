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
	int counter = 0, i = 0;

	switch (*format)
		{
			case 'c':
			{
				ch = va_arg(args, int);

				_putchar(ch);
				counter++;
				break;
			}
			case 's':
			{
				char *x = va_arg(args, char *);

				x = malloc(sizeof(char *) + 1);
				if (x == NULL)
					x = "(null)";
				else if (*x == '\0')
					return (-1);
				for (i = 0; x[i]; i++, counter++)
					_putchar(x[i]);
				free(x);
				break;
			}
			case '%':
			{
				_putchar('%');
				counter++;
				break;
			}
			default:
			{
				counter += state_checker_dig1(format, args);
				break;
			}
		}
	return (counter);
}
