#include "main.h"
#include <string.h>

/**
 * puts_half - puts half
 *@str: string parameter
 */
void puts_half(har *str)
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
		_putchar(str[i]);
	_putchar('\n');
