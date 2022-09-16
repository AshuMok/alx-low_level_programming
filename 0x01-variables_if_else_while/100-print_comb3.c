#include <stdio.h>

/**
 * main - these decimal prints in the putchar function
 *
 * Description: using the main function
 * this program prints all possible combination of two digits
 * Return: 0
 */
int main(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
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
