#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The number of char to be copied
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j]
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
