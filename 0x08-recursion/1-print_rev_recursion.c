#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string to be printed
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
