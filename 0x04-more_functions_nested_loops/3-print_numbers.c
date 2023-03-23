#include "main.h"
#include <stdio.h>


/**
 * print_numbers - print num from 0-9 ,the  a new line on there
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
       	{
		putchar(i + '0');
	}
       	putchar('\n');
}

