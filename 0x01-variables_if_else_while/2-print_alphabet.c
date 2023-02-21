#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'prints the alphabet in lowercase'
 *
 * Return: o (success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
		return (0);
}
