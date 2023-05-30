#include "main.h"

/**
 * print_num - print int
 *
 * @n: int
 */
void print_num(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
		print_num(i / 10);
	_putchar((i % 10) | '0');
}
