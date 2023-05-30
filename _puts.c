#include "main.h"

/**
 * _puts - print str
 * @s: string
 * Return: int
 */
int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
