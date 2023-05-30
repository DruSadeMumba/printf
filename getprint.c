#include "main.h"

/**
 * get_print - select modifier
 *
 * @c: char
 * Return: pointer
 */
int (*get_print(char c))(va_list, flags_f *)
{
	handler arr[] = {
		{'%', print_perc},
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'u', print_unsign},
		{'o', print_oct},
		{'b', print_binary},
		{'x', print_hex},
		{'X', print_HEXA},
		{'r', print_rev},
		{'R', print_rot13},
		{'S', print_specStr},
		{'p', print_address}
	};
	int flags = 14;
	int i;

	for (i = 0; i < flags; i++)
	{
		if (arr[i].a == c)
			return (arr[i].f);
	}
	return (NULL);
}

