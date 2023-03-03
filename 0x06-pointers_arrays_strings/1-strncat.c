#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0; /* string length for src */
	int len2 = 0; /* string length for dest */

	int i;

	while (src[len1] != '\0')
		len1++;
	while (dest[len2] != '0\')
		len2++;
	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
