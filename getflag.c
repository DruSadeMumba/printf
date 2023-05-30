#include "main.h"

/**
 * get_flag - get flags
 *
 * @c: char
 * @f: pointer
 * Return: int
 */
int get_flag(char c, flags_f *f)
{
	int i = 0;

	switch (c)
	{
		case '+':
			f->plus = 1;
			i = 1
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
