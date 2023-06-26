#include <stdio.h>
/**
  *main - start program
  *description: loop over ascii values
  *Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
