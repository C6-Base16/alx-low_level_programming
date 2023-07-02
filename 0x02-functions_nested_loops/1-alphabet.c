#include "main.h"
/**
  *main - start program
  *print_alphabet : Print ascii 97-122
  *Return: 0
  */

void print_alphabet(void)
{
	char ch;

	for (ch ='a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
