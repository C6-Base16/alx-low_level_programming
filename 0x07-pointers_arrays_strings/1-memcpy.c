#include "main.h"
/**
  * _memcpy - function copies 
  * to memory area
  * @n: functions copies
  * @src: bytes for memory
  * @dest: to memory area
  * Return: pointer
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
