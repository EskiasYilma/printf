#include "main.h"

/**
 * flag_i_d - int to char
 * @id: integer
 * Return: pointer to string version of 'id'
 */

char *flag_i_d(va_list id)
{
	int n;
	int i, j, k, x, counter;
	char *s;

	n = va_arg(id, int);
	counter = i = 0;
	x = 1;
	n >= 0 ? (j = n * -1) : (j = n, counter++);
	k = j;
	while (k <= -10)
	{
		x *= 10;
		k /= 10;
		counter++;
	}
	s = malloc((counter + 1) * sizeof(char));
	if (n < 0)
		s[i++] = '-';
	while (x >= 1)
	{
		s[i++] = (((j / x) % 10) * -1 + '0');
		x /= 10;
	}
	return (s);
}

