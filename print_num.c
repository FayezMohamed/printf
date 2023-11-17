#include "main.h"

/**
 * print_int - Print an integer
 * @ap: Arguments list
 *
 * Return: Number of characters printed
 */
int print_int(va_list ap)
{
    int num = va_arg(ap, int);
    int count = 0;

    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

    if (num / 10 != 0)
        count += print_int(ap);

    _putchar(num % 10 + '0');
    count++;

    return count;
}
