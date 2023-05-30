#include "main.h"

/**
 * print_char - print char
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_char(va_list args, flags_f *f)
{
	(void)f;
	_putchar(va_arg(args, int));
	return (1);
}
