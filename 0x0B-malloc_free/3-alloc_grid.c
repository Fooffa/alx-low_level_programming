#include "main.h"

/**
*alloc_grid -  returns a pointer to a 2 dimensional array of integers
*Return: returns a pointer to a 2 dimensional array of integers
*@width: input an integer
*@height: input as an integer
*/

int **alloc_grid(int width, int height)
{
	int j, i, l, m;
	int **B;

	if (width <= 0 || height <= 0)
		return (NULL);
	B = malloc(height * sizeof(int *));

	if (B == NULL)
	{
		return (NULL);
		free(B);
	}
	for (l = 0; l < height; l++)
	{
		B[l] = malloc(width * sizeof(int));
		if (B[l] == NULL)
		{
			for (m = l; m >= 0; m--)
				free(B[m]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
			B[i][j] = 0;
	}
	return (B);
}
