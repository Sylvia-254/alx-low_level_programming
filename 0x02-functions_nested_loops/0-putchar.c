#include "main.h"
/**
 * main - prints _putchar
 * Return: always (0)
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
