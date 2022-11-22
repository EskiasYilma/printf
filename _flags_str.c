#include "main.h"

/**
  * flag_percent - % flag
  * Return: '%'
  */

char *flag_percent(void)
{
	char *str;

	str = "%";
	return (str);
}

/**
  * flag_c - char flag
  * @c: char
  * Return: string
  */

char *flag_c(va_list c)
{
	char str[2];
	char *s;

	s = str;
	str[0] = va_arg(c, int);
	str[1] = '\0';
	return (s);
}

/**
  * flag_s - string flag
  * @s: string
  * Return: string
  */

char *flag_s(va_list s)
{

	char *str = va_arg(s, char *);

	if (str == NULL)
		return ("(null)");
	if (*str == '\0')
		return (-1);
	return (str);
}

/**
 * flag_nil - raised nothing flag
 * @nil: char
 * Return: % + char passed
 */


char *flag_nil(char nil)
{
	char str[3];
	char *ptr;

	ptr = str;
	str[0] = '%';
	str[1] = nil;
	str[2] = '\0';
	return (ptr);
}
