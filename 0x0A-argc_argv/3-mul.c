#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that multiplies two numbers.
 * @argc: argument coun
 * @argv: argument:
 * Retun: 0
 */

int main(int argc, cahr **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	retun (0);
}
