#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an init: %i byte(s)\n", sizeof(init));
	printf("size of a long init: %i byte(s)\n", sizeof(long init));
	printf("size of a long long init: %i byte(s)\n", sizeof(long long init));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
