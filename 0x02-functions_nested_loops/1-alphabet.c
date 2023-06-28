#include "main.h"
/**
  *main - start program
  *Description - 
  *Return - 0
  */
int main(void)
{
	void print_alphabet(void)
	{
		int i;

		for( i=97; i<=122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
