#include "main.h"

/**
 * _isdigit - prints a digit
 * @c: parameter
 * Return: 1 if successful, 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
