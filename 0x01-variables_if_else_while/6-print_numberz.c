#include <stdio.h>

/**
 * main - prints base ten digits without char
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
