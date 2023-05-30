#include "main.h"

/**
 * print_int - print int and decimal
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_int(va_list args, flags_f *f)
{
	int n = va_arg(args, int);
	int count = counting(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		count += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		count += _putchar('+');
	if (n <= 0)
		count++;
	print_num(n);
	return (count);
}
