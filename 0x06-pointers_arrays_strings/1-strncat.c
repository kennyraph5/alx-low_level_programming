#include "main.h"

/**
* _strncat - concatenate two strings with n bytes max
* @dest: receiving string
* @src: getting string
* @n: number of bytes
* Return: pointer to the resulting dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	;

	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j];
		j++;
	}

/*	dest[i++] = '\0';*/

	return (dest);
}
