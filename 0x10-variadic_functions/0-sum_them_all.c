#include "variadic_functions.h"

/**
 * Sum_them_all - adds all the number
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap. n);

	if (n == 0)
		return (0);

	for (i = 0; 1 <n; i++)
		sum += va_arg(ap, int);

	va_end(ap)

		return (sum);
}
