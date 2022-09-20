#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of array
 * @a: array
 * @n: nnumber of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (in != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
