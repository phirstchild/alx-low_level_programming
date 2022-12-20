#include <stdio.h>
#include "main.h"

/**
 * swap_int - a funcion that swaps the value of 2 integers
 * @a: first value to be provided
 * @b: second value to be provided
 * int c: address the swapped value will be sent to
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)

{
		int c = *a;
		*a = *b;
		*b = c;
}

