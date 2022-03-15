#include "main.h"
/**
 * main - Print "_puchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char puchar[] = "_puchar";
	int i = 0;
	while (puchar[i] != '\0')
	{
		_putchar(puchar[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
