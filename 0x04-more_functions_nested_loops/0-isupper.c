#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: alphabet
* Return: int
*/

int _isupper(int c)
{
	if (c > 64 && c < 92)
		return (1);
	else
		return (0);
}
