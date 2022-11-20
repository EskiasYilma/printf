#include "main.h"

/**
 * toLower - converts characters to lowercase
 * @chr: character to convert
 * Return: converted character index
 */

int toLower(int chr)
{
	return ((chr >= 'A' && chr <= 'Z') ? (chr + 32) : (chr));
}

