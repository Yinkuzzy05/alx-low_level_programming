#include <stdio.h>
#include  <stdlib.h>

/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument
 * Return:  always o
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*array int*/

	position = total =change = aux = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	total   = atoi(argv[1]); /*convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
}
