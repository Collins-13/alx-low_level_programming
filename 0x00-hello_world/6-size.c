#include <stdio.h>

/**
 *
 * main - printing 
 *
 * Return: Always 0 (printed)
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %byte(s)\n", sizeof(a));
	printf("size of an int: %byte(s)\n", sizeof(b));
	printf("size of a long int: %byte(s)\n", sizeofs(c));
	printf("size of a long long int: %byte(s)\n", sizeofda));
	printf("size of a float: %byte(s)\n", sizeofea);
	return (0);
}
