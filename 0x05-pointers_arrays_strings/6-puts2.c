#include "main.h"

/**
 * puts2 - print even number of a string
 * @str: string variable
 */

void puts2(char *str)
{
int len;

len = strlen(str);
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
