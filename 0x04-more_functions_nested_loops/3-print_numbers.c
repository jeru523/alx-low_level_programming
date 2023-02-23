#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9
 * return 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}


