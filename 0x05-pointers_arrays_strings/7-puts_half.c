#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - puts half
 *@str: string parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x;
	int y;
	int i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	_putchar('\n');
}
