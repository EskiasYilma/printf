#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, bff_end = 0, len = 0;
	int counter = 0, *cnt_ptr;
	va_list args;
	char buffer[BUFFER_SIZE], *tmp, *(*get_valid_flags)(va_list);

	while (i < BUFFER_SIZE)
	{
		buffer[i] = 0;
		i++;
	}
	get_valid_flags = NULL;
	cnt_ptr = &counter;
	va_start(args, format);
	for (i = bff_end = len = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			get_valid_flags = get_flags(format[i + 1]);
			tmp = (get_valid_flags == NULL) ?
				flag_nil(format[i + 1]) :
				get_valid_flags(args);
			len = _strlen(tmp);
			bff_end = buffer_mgmt(tmp, len, buffer, bff_end, cnt_ptr);
			i++;
		}
		else
		{
			tmp = char_to_str(format[i]);
			bff_end = buffer_mgmt(tmp, 1, buffer, bff_end, cnt_ptr);
		}
	}
	va_end(args);
	_xprintf(buffer, bff_end);
	return (counter + bff_end);
}

