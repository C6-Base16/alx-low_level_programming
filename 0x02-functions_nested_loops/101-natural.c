#include <stdio.h>

/**
  * main - prints sum of multiples up to 1024
  * Return: 0
  */

int main(void)
{
	int z;
	int i;

	z = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
