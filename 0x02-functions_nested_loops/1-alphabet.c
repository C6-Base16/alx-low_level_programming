#include "main.h"
/**
  *main - start program
  *Description: Print ascii 97-122
  *Return: 0
  */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
