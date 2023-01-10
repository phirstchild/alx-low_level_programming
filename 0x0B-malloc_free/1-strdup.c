#include "main.h"
/**
 * _strlens - count arrays
 * @s: arrays of elements
 * Return: 1
 */

int _strlens(char *s)
{

	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*counts character of string*/

	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: arrays of element
 * @dest: destination arrays
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{

		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * *_strdup - arrays for a string
 * @str: arrays of element
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)

	{
		return (NULL);
	}


	size = _strlens(str) + 1;

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
	return (NULL);
	}

	_strcpy(dest, str);
	return (dest);
}


