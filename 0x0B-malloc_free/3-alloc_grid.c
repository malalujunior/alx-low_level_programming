#include "main.h"
#include <stdlib.h>

/**

 * alloc_grid - nested loop to make grid

 * @width: width input

 * @height: height input

 * Return: pointer to 2 dim. array

*/

int **alloc_grid(int width, int height)
{
	int **you;

	int a, b;

	if (width <= 0 || height <= 0)

		return (NULL);

	you = malloc(sizeof(int *) * height);

	if (you == NULL)

		return (NULL);

	for (a = 0; a < height; a++)

	{
		you[a] = malloc(sizeof(int) * width);

		if (you[a] == NULL)

		{
			for (; a >= 0; a--)

				free(you[a]);

			free(you);

			return (NULL);

		}

	}


	for (a = 0; a < height; a++)

	{
		for (b = 0; b < width; b++)

			you[a][b] = 0;

	}

	return (you);
}


