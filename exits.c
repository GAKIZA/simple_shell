#include "shell.h"

/**
 * *_strncpy - copies a string
 * @dest: the destination string to bee copied to
 * @src: the source string
 * @n: the amount of characters to be copied
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, y;
	char *s = dest;

	x = 0;
	while (src[x] != '\0' && x < n - 1)
	{
		dest[x] = src[x];
		x++;
	}
	if (x < n)
	{
		y = x;
		while (y < n)
		{
			dest[y] = '\0';
			y++;
		}
	}
	return (s);
}
/**
 * *_strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the amount of bytes to be maximally used
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, q;
	char *s = dest;

	p = 0;
	q = 0;
	while (dest[p] != '\0')
		p++;
	while (src[q] != '\0' && q < n)
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	if (q < n)
		dest[p] = '\0';
	return (s);
}

/**
 * *_strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to be looed for
 * Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}
