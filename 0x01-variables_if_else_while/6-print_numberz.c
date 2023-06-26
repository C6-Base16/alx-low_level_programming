#include <stdio.h>
/**
  *main - start program
  *description: loop over ascii values
  *Return: always 0
  */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
