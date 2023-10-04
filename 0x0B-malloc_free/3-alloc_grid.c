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
	int **naa;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	naa = malloc(sizeof(int *) * height);
	if (naa == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		naa[i] = malloc(sizeof(int) * width);
		if (naa[i] == NULL)
		{
			for (; i >= 0; i--)
				free(naa[i]);
			free(naa);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			naa[i][k] = 0;
	}
	return (naa);
}

