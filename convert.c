#include "main.h"

/**
 * convert - convert int to *s
 * @n: int
 * @b: base
 * @lc: lowercase flag
 * Return: string
 */
char *convert(unsigned long int n, int b, int lc)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lc)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[n % b];
		n /= b;
	} while (n != 0);
	return (ptr);
}
