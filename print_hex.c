#include "main.h"

/**
 * print_hex - print hex
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_hex(va_list args, flags_f *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = convert(n, 16, 1);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _puts("0x");
	count += _puts(s);
	return (count);
}
