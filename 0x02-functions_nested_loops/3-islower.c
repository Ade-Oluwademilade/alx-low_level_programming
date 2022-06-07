#include "main.h"
/**
 * _islower - Short description, single line
 * @c: contains value that will be compared
 *
 * Return 1 if true and 0 otherwise
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
