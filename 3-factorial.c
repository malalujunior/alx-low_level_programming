#include "main.h"

/**
 * factorial - returns the factorial of a numbers
 * @n: number to return of the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
