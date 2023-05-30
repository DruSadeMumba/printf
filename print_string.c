#include "main.h"

/**
 * print_string - print string
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_string(va_list args, flag_f *f)
{
	char *s = va_arg(args, char *);

	void(f);

	if (!s)
		s = "(nil)";
	return (_puts(s));
}
