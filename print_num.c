#include "main.h"

/**
 * print_int - prints integer
 * @ap: argument pointer
 * Return: integer
 */
int print_int(va_list ap)
{
    int n = va_arg(ap, int);
    int num, final = n % 10, digit, exp = 1;
    int  i = 1;

    n = n / 10;
    num = n;

    if (final < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        final = -final;
        i++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(final + '0');

    return (i);
}

/**
 * print_dec - prints decimal
 * @ap: argument pointer
 * Return: integer
 */
int print_dec(va_list ap)
{
    int n = va_arg(ap, int);
    int num, final = n % 10, digit;
    int  i = 1;
    int exp = 1;

    n = n / 10;
    num = n;

    if (final < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        final = -final;
        i++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(final + '0');

    return (i);
}

