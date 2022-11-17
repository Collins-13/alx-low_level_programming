#include "variadic_functions.h"

/**
 * print_all -  function that prints anything.
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_lis a_list;

	va_tart(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c';
			printf("%c", va_arg(a_list, int));
			flag = 0;
			break;
		case 'i';
			printf("%i", va_arg(a_list, int));
			flag = 0;
			break;
		case 'f';
			printf("%f", va_arg(a_list, double));
			flag = 0;
			break;
		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a-list);
}
