#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: number of char to be copied
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
