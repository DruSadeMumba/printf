#include "main.h"

/**
 * counting - number of digits
 *
 * @i: int
 * Return: int
 */
int counting(int i)
{
	unsigned int x = 0, y = i;

	if (i < 0)
		y = i * -1;
	while (y != 0)
	{
		y /= 10;
		x++;
	}
	return (x);
}
