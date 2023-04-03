#include "main.h"

/**
 * print_diagonal - print_diagonal
 *
 * @n : number of times the character '\' should be printed
 **/

void print_diagonal(int n)
{
	int count = 0;
	int a = 0;

	while (count < n)
	{
		while (a <= count)
		{
			if (a == count)
			{
				_putchar('\\');
			}
			else
				_putchar(' ');
			a++;
		}
		a = 0;
		count++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
