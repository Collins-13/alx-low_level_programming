#include "main.h"
#include <stdio>

/**
 * print_array - a function that prints n elements of an array of integers, followed by a new line.
 * @a: int to check
 * @n: int to check
 * Return: 0
 */

void print_array(int *a, int n)

{
	int x;
	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x];
					else
					printf("%d", a[x]);
				printf("\n");
}
