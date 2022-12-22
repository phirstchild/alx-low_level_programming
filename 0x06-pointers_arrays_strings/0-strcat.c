#include <stdio.h>
#include "main.h"

/**
_strcat - concanates two strings
@src: first string
@dest: second string
Return: pointer to the designated string
*/

char *_strcat(char *dest, char *src)
{
  int length, j;
  
  length = 0;
  
  while (dest[length] != '\0')
  {
    length++;
  }
  for (j = 0; src[j] != '\0'; j++, length++)
  {
    dest[length] = src[j];
  }
  
  dest[length] = '\0';
  return[dest]
 }
