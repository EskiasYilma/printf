#include "main.h"

/**
 * rev_string - reverses a string
 * @str1: string to reverse
 * Return: Nothing
 */

void rev_string(char *str1)
{
	int i, len, temp;
	char *str2 = (char *) str1;

	while (*str1)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str2[i] = str1[len - i - 1];
		str2[len - i - 1] = temp;
	}
	for (i = 0; i < len; i++)
		_putchar(str1[i]);
}
