#include "main.h"

/**
 * print_alphabet_x10 -> prints lowercase alphabet 10X
 */

void print_alphabet_x10(void)
{
int a;
int i;

for (a = 0; a <= 10; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
