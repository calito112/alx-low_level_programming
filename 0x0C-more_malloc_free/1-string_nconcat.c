#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate the first n bytes of a string to another
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: size of s2 to be concatenated
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	char *p = malloc(len1 + n + 1);

	if (p == NULL)
		return (NULL);

	strcpy(p, s1);
	strncat(p, s2, n);

	return (p);
}
