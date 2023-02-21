#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase except e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
		return (0);
}
