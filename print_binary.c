#include "main.h"

/**
 * print_binary - prints binary number.
 * @ap: argument pointer.
 * Return: integer
 */
int print_binary(va_list ap)
{
    int flag = 0;
    int counter = 0;
    int i, a = 1, temp;
    unsigned int num = va_arg(ap, unsigned int);
    unsigned int ptr;

    for (i = 0; i < 32; i++)
    {
        ptr = ((a << (31 - i)) & num);
        if (ptr >> (31 - i))
            flag = 1;
        if (flag)
        {
            temp = ptr >> (31 - i);
            _putchar(temp + '0');
            counter++;
        }
    }

    if (counter == 0)
    {
        counter++;
        _putchar('0');
    }

    return (counter);
}
