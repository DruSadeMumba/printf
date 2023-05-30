#include "main.h"

/**
 * print_rot13 - prnt rot13
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_rot13(va_list args, flags_f *f)
{
	int i, j, n = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = var_arg(args, char *);

	(void)f;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[j] == s[i])
			{
				n += _putchar(b[j]);
				break;
			}
		}
	}
	return (n);
}
