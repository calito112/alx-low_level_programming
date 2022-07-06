#include "main.h"

/**
 *main - this is my method
 *
 *description - a program that prints __putchar
 *
 *Return: returns 0 always
 */

int main(void)
{
char var[] = "_putchar";

int i;

int l = sizeof(var) / sizeof(var[0]);

for (i = 0; i < l - 1; i++)

{

_putchar(var[i]);

}
_putchar('\n');

return (0);
}
