#include "main.h"

/**
  * _memset - fill a block of memory with a value
  * @s: address to be filled
  * @b: value
  * @n: number of bytes
  *
  * Return: array for n bytes
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
