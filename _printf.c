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
			specs temp;
			if (*format == 'c')
			{
				temp.c = va_arg(ar, int);
				_putchar(temp.c);
				n++;
			}
			else if (*format == 's')
			{
				temp.s = va_arg(ar, char *);
				while (*temp.s)
				{
					_putchar(*temp.s);
					temp.s++;
					n++;
				}
			}
		}
		else
		{
			_putchar(*format);
			n++;
		}
		format++;
	}
	va_end(ar);
	return (n);
}
