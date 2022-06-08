#include <stdio.h>
/**
 * main - main
 * Return: value
 */
int main(void)
{
	long int a, b, c, d;
	a = 1;

	b = 2;

	for (a = 1; a <= 50; a++)
	{
		if (b != 20365011074)
		{
			printf("%dd, ", b);
		}
		else
		{
			printf("%dd\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
