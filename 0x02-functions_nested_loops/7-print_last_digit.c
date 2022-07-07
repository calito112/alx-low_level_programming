#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: passed argument
 * Return: the last digit
 */

int print_last_digit(int a)
{
int digit;

if (a < 0)
a = -a;
digit = a % 10;
_putchar(digit + '0');
return (digit);
}

