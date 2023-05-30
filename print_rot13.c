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
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		s = "(nil)";
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == a[i])
					_putchar(b[i]);
			}
		}
	}
	return (j);
}
