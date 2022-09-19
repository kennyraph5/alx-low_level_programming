#include "main.h"

/**
 * _strlen - Return the length of string
 * @str: string
 *
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	Return (len);
}
