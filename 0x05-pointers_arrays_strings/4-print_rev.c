#include "main.h"

/**
 * _rev - Print string in reverse
 * @s : string to a reverse
 */
void print_rev(char *s);
{
	int i = 0;

	while (s[i])
		i++;

	for (i = len - 1; 1 >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
