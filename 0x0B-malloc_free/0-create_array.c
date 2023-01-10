#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the string
 * Return: 0 if successful, except defined otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;

	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*defines value with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /* while for arrays*/

		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}

