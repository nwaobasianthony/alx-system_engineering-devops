#include "main.h"
/**
 * main - prints "_putchar", followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char txt[] = "_putchar";
	int i = 0;

	while (txt[i] != '\0')
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
