#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include "main.h"

/**
 * hexaupper - converts base 10 to base 16 uppercase
 * @x: integer base 10
 * Return: Nothing
 */

void hexaupper(unsigned long x)
{
	unsigned long q, r;
	int i, j = 0;
	char *h;

	h = malloc(x + 1);
	q = x;

	while (q != 0)
	{
		r = q % 16;
		if (r < 10)
			h[j++] = 48 + r;
		else
			h[j++] = 55 + r;
		q = q / 16;
	}
	for (i = j; i >= 0; i--)
		_putchar(h[i]);
}

/**
 * flag_str - prints string
 * @s: character pointer
 * Return: Nothing
 */

void flag_str(const char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}

/**
 * print_number - prints digits
 * @n: number to print
 * Result: Nothing
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
