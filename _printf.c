#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int state = 0;
	unsigned int counter = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
				_putchar(*format);
			counter++;
		}
		else if (state == 1)
			state = state_checker(format, args);
		format++;
	}

	va_end(args);
	return (counter);
}
