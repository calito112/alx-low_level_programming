#include "main.h"

/**
 * puts2 - print even number of a string
 * @str: string variable
 */

void puts_half(char *str)
{
int x, y, i;

x = strlen(str);
if (x % 2 == 1)
y - x / 2;
else
y = x / 2;
for (i = y; i < x; i++)
_putchar(str[i]);
_putchar('\n');
}
