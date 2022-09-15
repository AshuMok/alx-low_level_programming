#include <unistd.h>

/**
 * main - write the string in the write function
 *
 * Description: Using the main function
 * the program print and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

