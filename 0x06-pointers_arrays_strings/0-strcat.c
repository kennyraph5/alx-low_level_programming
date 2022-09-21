#include "main.h"

/**
 * _strcat - a function that concatenate two strings 
 * @dest: first string
 * @src: second string
 * Return: string
 */
char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (*dest[len])
		len++

	for (i = 0; *src[i] != '\0'; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (dest)
