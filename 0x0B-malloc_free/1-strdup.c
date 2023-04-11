#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *hhh;
	int p, g = 0;

	if (str == NULL)

		return (NULL);

	p = 0;

	while (str[p] != '\0')

		p++;

	hhh = malloc(sizeof(char) * (p + 1));

	if (hhh == NULL)

		return (NULL);
	for (g = 0; str[g]; g++)

		hhh[g] = str[g];

	return (hhh);
}
