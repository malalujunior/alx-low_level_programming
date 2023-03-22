#include  "main"

/**
 * print_alphabet_10 - Print the alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
