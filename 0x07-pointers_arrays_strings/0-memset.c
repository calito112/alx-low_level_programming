#include "main.h"
#include <string.h>

/**
 * _memset -> memory set function
 * @s: pointer to the string s
 * @b: char variable
 * @n: size in byte of a memory space
 * Return: pointer to the variable s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
return (s);
}
}
