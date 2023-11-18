#include "main.h"

/**
 * print_unsigned - prints unsigned integer.
 * @ap: args pointer.
 * Return: integer
 */
int print_unsigned(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        count += print_unsigned_recursive(num);
    }

    return count;
}

/**
 * print_unsigned_recursive - recursively prints unsigned integer.
 * @num: the unsigned int to print.
 *
 * Return: number of characters printed.
 */
int print_unsigned_recursive(unsigned int num)
{
    int count = 0;

    if (num / 10 != 0)
    {
        count += print_unsigned_recursive(num / 10);
    }

    _putchar((num % 10) + '0');
    count++;

    return count;
}

