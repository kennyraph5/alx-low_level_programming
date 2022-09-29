#include "main"


/**
 * _puts_recursion - function that print a string
 * @s - print a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else 
		_putchar('\n')
}
