#include "main.h"

/**
  *strncpy - function that copies
  *Dest: destination string
  *src: source string
  *Return: pointer setination
  */

char *_strncpy(char *dest, char *src, int n)
{
int count_of_bytes;

for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
dest[count_of_bytes] = src[count_of_bytes];

for (; count_of_bytes < n; count_of_bytes++)
dest[count_of_bytes] = '\n';

return (dest);
}
