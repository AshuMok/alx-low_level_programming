#include <stdio.h>

/**
 * main - print combinations of two two-digit numbers in the putchar functions
 *
 * Description: using the main function
 * this program prints combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
