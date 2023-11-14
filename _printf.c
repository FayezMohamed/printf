#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ar;
	int n = 0;

	va_start(ar, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			spec
		}
	}
}
