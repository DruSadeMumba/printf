#include "main.h"

/**
 * print_oct - print octal
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_oct(va_list args, flags_f *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = convert(n, 8, 0);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _putchar('0');
	count += _puts(s);
	return (count);
}
