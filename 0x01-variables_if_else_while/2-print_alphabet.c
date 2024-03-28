#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
