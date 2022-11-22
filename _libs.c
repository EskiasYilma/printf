#include "main.h"

/**
 * _xprintf - prints buffer
 * @buffer: buffer
 * @buf_size: buffer size
 */

void _xprintf(char *buffer, unsigned int buf_size)
{
	write(1, buffer, buf_size);
}

/**
 * _strlen - string length
 * @c: string
 * Return: length of string
 */

int _strlen(char *c)
{
	int i;

	for (i = 0; *(c + i); i++)
		;
	return (i);
}

/**
 * buffer_mgmt - takes care of buffer allocation
 * @c: string to be allocated
 * @len: temp length
 * @buffer: buffer
 * @bff_end: end of buffer pointer
 * @ttl_buffer: total counter
 * Return: length of buffer
 */

int buffer_mgmt(char *c, int len, char *buffer, int bff_end, int *ttl_buffer)
{
	int i = 0;

	if (len + bff_end > BUFFER_SIZE)
	{
		i = BUFFER_SIZE - bff_end;
		_memcpy(buffer, c, i, bff_end);
		_xprintf(buffer, BUFFER_SIZE);
		c += i;
		_memcpy(buffer, c, len - i, 0);
		bff_end = len - i;
		*ttl_buffer += BUFFER_SIZE;
	}
	else
	{
		_memcpy(buffer, c, len, bff_end);
		bff_end += len;
	}

	return (bff_end);
}

/**
 * char_to_str - character to string
 * @s: charter
 * Return: string
 */

char *char_to_str(char s)
{
	char str[1], *ptr;

	ptr = str;
	str[0] = s;
	return (ptr);
}

/**
 * _memcpy - copy memory
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes
 * @len: buffer length
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i + len] = src[i];
	return (dest);
}

