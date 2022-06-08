#include <stdio.h>
/**
 * main - main
 * Return: value
 */
int main(void)
{
	long int a, b, c, f;
	a = 1;

	b = 2;

	for (a = 1; a <= 50; a++)
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
