#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_rev(va_list args, flags_f *f)
{
	int i = 0, j;
	char *s = va_arg(args, char *);

	(void) f;
	if (!s)
		s = "(nil)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
