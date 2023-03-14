#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - counts the number of words contained in a string
 * @c: string to count
 *
 * Return: number of words in string
 */
int count_words(char *c)
{
	int i, n = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
