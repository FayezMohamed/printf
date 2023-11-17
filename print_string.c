#include "main.h"
/**
 * print_string - prints a string
 * ap: arguments pointer
 *
 * Return: length of the string
 */
int print_string(va_list ap)
{
	char *str;
	int i;
	int length;

	str = va_arg(ap, char *);
	if (!str)
	{
		str = "(null)";
		return (0);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
}
