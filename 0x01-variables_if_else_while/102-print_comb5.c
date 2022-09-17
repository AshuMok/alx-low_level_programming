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
	int n1 = 0, n2;

	while(n1 <= 99)
	{
		n2 = n1;
		while(n2 <= 99)
		{
			if (n2 != n1)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');

				if(n1 != 98 || n2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return 0;
}
