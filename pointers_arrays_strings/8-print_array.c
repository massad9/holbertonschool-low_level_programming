#include "main.h"

/**
 * print_array - Prints n elements of an integer array.
 * @a: Array to print.
 * @n: Number of elements.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            _putchar(',');
            _putchar(' ');
        }

        if (a[i] < 0)
        {
            _putchar('-');
            if (a[i] == (-2147483647 - 1))
            {
                _putchar('2');
                _putchar('1');
                _putchar('4');
                _putchar('7');
                _putchar('4');
                _putchar('8');
                _putchar('3');
                _putchar('6');
                _putchar('4');
                _putchar('8');
                continue;
            }
            else
                print_number(a[i] * -1);
        }
        else
            print_number(a[i]);
    }

    _putchar('\n');
}

/**
 * print_number - Prints a positive integer.
 * @n: Number to print.
 */
void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
