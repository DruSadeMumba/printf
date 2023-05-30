#include "main.h"

/**
 * print_binary - print binary
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_binary(va_list args, flags_f *f)
{
	unsigned int n = (va_arg(args, unsigned int));
	char *s = convert(n, 2, 0);

	(void)f;
	return (_puts(s));
}
