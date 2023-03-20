#include <stdio.h>
/**
 * main - Write a program that prints all the hex number
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	n = 48;

	while (n <= 57) /*57 corresponds with ASCII character 9*/
	{
		putchar (n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar ('\n'); /*add new line*/
	return (0);
}
