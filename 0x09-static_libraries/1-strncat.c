#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int aray = 0, d_count = 0;

	while (dest[aray++])
	{
		d_count++;
	}

	for (aray = 0; src[aray] && aray < n; aray++)
	{
		dest[d_count++] = src[aray];
	}

	return (dest);
}
