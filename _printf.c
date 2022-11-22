#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int state = 0, counter = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(*format);
				counter++;
				state = 0;
			}
		}
		else if (state == 1)
		{
			state = state_checker(format, args);
			state = 0;
		}
		else
		{
			_putchar(*format);
			counter++;
			state = 0;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
