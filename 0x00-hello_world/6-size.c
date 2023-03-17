#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %ld bytes(s)", sizeof(char));
	printf("size of an int: %ld bytes(s)", sizeof(int));
	printf("size of a long int: %ld bytes(s)", sizeof(long int));
	printf("size of a long lomg int: %ld bytes(s)", sizeof(long long int));
	printf("size of a float: %ld bytes(s)", sizeof(float));
		return (0);
}
