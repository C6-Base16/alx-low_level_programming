#include <stdio.h>
/**
  *main - start program
  *description - lowercase+uppercase putchar
  *Return: 0
  */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (n = 65; n <= 90; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
