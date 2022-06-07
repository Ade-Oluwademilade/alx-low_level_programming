#include "main.h"
/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((alpha_lower > 'a' && alpha_lower < 'z) || (alpha_upper > 'A' && alpha_upper < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
