#include "main.h"

/**
 * print_char - prints a single character
 *
 * ap: arguments list
 *
 * Return: 1
 */
int print_char(va_list ap)
{
	char str;

	str = va_arg(ap, int);
	_putchar(str);
	return (1);
}
