#include "main.h"

/**
 * print_most_numbers - Prints 0 - 9, except 2 and 4
 *
 *
 *
 * Return: 0
 */

void print_most_numbers(void)
{
        int h;

        for (h = '0'; h <= '9'; h++)
        {
                if (h == '2' || h == '4')
                {
                        continue;
                }
                _putchar (h);
        }
        _putchar ('\n');
}
