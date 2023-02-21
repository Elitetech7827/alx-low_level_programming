#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'alphabet in lowercase except e and q'
 *
 * Return: o (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
