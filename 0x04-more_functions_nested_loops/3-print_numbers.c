#include "main.h"
/**
 * print_numbers - numbers printed from 0-9
 * return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c < '10'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}



