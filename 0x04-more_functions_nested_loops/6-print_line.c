#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n: number of '_' to be printed
 * Return: 0
 **/

void print_line(int n)
{
	int p = 0;

	while (p < n)
	{
		_putchar('_');
		p++;
	}
	_putchar('\n');
}
