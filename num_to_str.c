#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include "main.h"

/**
 * unsigned_no_to_str - converts unsigned number of base > 2 to string
 * @num: 64bit number to convert
 * @base: base of number
 * @buffer: char pointer
 * Return: Nothing
 */


void unsigned_no_to_str(uint64_t num, int base, char *buffer)
{
	int i, digit, cur = 0;
	char buf[65];

	if (num == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}


	for (i = 0; i < 65; i++)
		buf[i] = 0;

	cur = 0;
	while (num)
	{
		digit = num % base;
		if (digit >= 10)
			buf[cur++] = 'a' + (digit - 10);
		else
			buf[cur++] = '0' + digit;
		num /= base;
	}
	for (i = cur - 1; i != 0; i--)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
}

/**
 * no_to_str - converts number of base > 2 to string
 * @num: 64bit number to convert
 * @base: base of number
 * @buffer: char pointer
 * Return: Nothing
 */

void no_to_str(int64_t num, int base, char *buffer)
{
	if (num < 0)
	{
		*buffer++ = '-';
		num = -num;
	}
	unsigned_no_to_str(num, base, buffer);
}
