#include "main.h"

/**
 * print_HEXA - print hex in uppercase
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_HEXA(va_list args, flags_f *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = convert(n, 16, 0);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _puts("0X");
	count += _puts(s);
	return (count);
}
