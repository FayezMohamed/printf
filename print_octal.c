#include "main.h"

/**
 * print_octal - prints an octal number.
 * @ap: arguments pointer
 * Return: counter
 */

int print_octal(va_list ap)
{
    int i;
    int *arr;
    int counter = 0;
    unsigned int num = va_arg(ap, unsigned int);
    unsigned int tem = num;

    while (num / 8 != 0)
    {
        num /= 8;
        counter++;
    }
    counter++;
    arr = malloc(counter * sizeof(int));

    for (i = 0; i < counter; i++)
    {
        arr[i] = tem % 8;
        tem /= 8;
    }
    for (i = counter - 1; i >= 0; i--)
    {
        _putchar(arr[i] + '0');
    }
    free(arr);
    return counter;
}
