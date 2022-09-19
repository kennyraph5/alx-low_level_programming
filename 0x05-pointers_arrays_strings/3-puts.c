#include "main.h"

/**
 * _puts - Print string
 * @str : string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
