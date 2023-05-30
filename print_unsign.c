#include "main.h"

/**
 * print_unsign - print unsigned int
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_unsign(va_list args, flags_f *f)
{
	unsigned int i = va_arg(args, unsigned int);
	char *s = convert(i, 10, 0);

	(void)f;
	return (_puts(s));
}
