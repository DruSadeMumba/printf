#include "main.h"

/**
 * print_address - print address
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_address(va_list args, flags_f *f)
{
	char *s;
	unsigned long l = va_arg(args, unsigned long);

	int count = 0;

	(void)f;

	if (!l)
		return (print_string("(nil)"));
	s = convert(l, 16, 1);
	count += _puts("0x");
	count += _puts(s);
	return (count);
}
