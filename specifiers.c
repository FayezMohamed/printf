#include "main.h"

/**
 * get_specifier - finds the right func according to specifier
 * @s: string
 *
 * Return: number of bytes
 */

int (*get_specifier(char *s))(va_list ap, params_t *params)
{
	int i = 0;

	specifier_t specifiers[] =
	{
		{"c", print_char},
		{"e", print_char},
		{"i", print_char},
		{"s", print_char},
		{"%", print_char},
		{"b", print_char},
		{"o", print_char},
		{"u", print_char},
		{"x", print_char},
		{"X", print_char},
		{"p", print_char},
		{"S", print_char},
		{"r", print_char},
		{"R", print_char},
		{NULL, NULL}
	};

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_print_func - appies the function got by get_specifier
 * @s: string
 * @ap: argument list
 * @params: paramaters struct
 */

int get_printf_func(char *s, va_list ap, params_t *params)
{
	int (*f)(va_list, params_t *) = get_specifier(s);

	if (f)
	{
		return (f(ap, params));
	}
	return (0);
}
