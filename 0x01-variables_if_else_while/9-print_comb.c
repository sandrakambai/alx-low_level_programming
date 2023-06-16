#include <stdio.h>
/**
 * main - Starting function
 *
 * Description: printing single digit numbers and adding a comma and space.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; <= 9; i++)
	{
		putchar (i + '0');
		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
