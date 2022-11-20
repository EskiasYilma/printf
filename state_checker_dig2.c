#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * state_checker_dig2 - checks for flags u, x, X
 * @format: character string
 * @args: arguements
 * Return: last saved printing state
 */

int state_checker_dig2(const char *format, va_list args)
{
	int i, state = 1;
	char buf[65];

	switch (*format)
	{
		case 'u':
			{
				unsigned int n = va_arg(args, int);

				no_to_str(n, 10, buf);
				for (i = 0; buf[i]; i++)
					_putchar(buf[i]);
				state = 0;
				break;
			}		   
		case 'x':
			{
				unsigned int n = va_arg(args, int);
				
				no_to_str(n, 16, buf);
				for (i = 0; buf[i]; i++)
					_putchar(buf[i]);
				state = 0;
				break;
			}
		case 'X':
			{
				unsigned long n = va_arg(args, unsigned long);

				hexaupper(n);
				state = 0;
				break;
			}				
		default:
		{
			state = state_checker_adv(format, args);
			break;
		}
	}
	return(state);
}
