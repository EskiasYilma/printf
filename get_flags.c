#include "main.h"

/**
 * get_flags - returns a pointer to the function that
 * corresponds to the flag given as parameter
 * @s: flag pointer
 * Return: a pointer to the function that corresponds
 * to the flag given as parameter
 */

char *(*get_flags(char s))(va_list)
{
	int i = 0;
	v_flags flags[] = {
		{"c", flag_c},
		{"s", flag_s},
		{"d", flag_i_d},
		{"i", flag_i_d},
		{"%", flag_percent},
		{NULL, NULL}};

	while (flags[i].c_flag)
	{
		if (s == *flags[i].c_flag)
		{
			return (flags[i].f);
		}
		i++;
	}
	return (NULL);
}

