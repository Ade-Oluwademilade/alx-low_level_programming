#include <stdio.h>
/**
 * main - main
 * Return: value
 */
int main(void)
{
	long int i, b, c, f;

	b = 1;

	c = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (b != 20365011074)
		{
			printf("%fd, ", b);
		}
		else
		{
			printf("%fd\n", b);
		}
		f = b + c;
		b = c;
		c = f;
	}
	return (0);
}
