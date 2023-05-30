#include "main.h"

/**
 * print_specStr - print string and hex
 *
 * @args: args
 * @f: pointer
 * Return: int
 */
int print_specStr(va_list args, flags_f *f)
{
	int i, count = 0;
	char *s = va_arg(args, char *);
	char *str;

	(void)f;
	if (!s)
		return (_puts("(nil)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			str = convert(s[i], 16, 0);
			if (!str[1])
				count += _putchar('0');
			count += _puts(str);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
