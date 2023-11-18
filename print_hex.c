#include "main.h"

int print_hex_recursive(unsigned int num, int lowercase);

/**
 * print_lower_hex - prints lowercase hexadecimal number.
 * @ap: arguments pointer
 * Return: integer
 */
int print_lower_hex(va_list ap)
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
        count += print_hex_recursive(num, 1);
    }

    return count;
}

/**
 * print_upper_hex - prints uppercase hexadecimal number.
 * @ap: arguments pointer
 * Return: integer
 */
int print_upper_hex(va_list ap)
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
        count += print_hex_recursive(num, 0);
    }

    return count;
}

/**
 * print_hex_recursive - prints hexadecimal using recursion
 * @num: the unsigned int to print
 * @lowercase: flag
 *
 * Return: number of characters printed
 */
int print_hex_recursive(unsigned int num, int lowercase)
{
    int count = 0;
    int remainder = num % 16;

    if (num / 16 != 0)
    {
        count += print_hex_recursive(num / 16, lowercase);
    }
    char digit = (remainder < 10) ? remainder + '0' : remainder - 10 + (lowercase ? 'a' : 'A');
    _putchar(digit);
    count++;

    return count;
}

