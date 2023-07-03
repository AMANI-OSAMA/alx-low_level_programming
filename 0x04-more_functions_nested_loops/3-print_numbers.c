#include "main.h"

/**
 * print_numbers - A script that prints numbers from 0-9, and a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
        int m;

        m = 48;

        while (m <= 57)
        {
                _putchar (m);
                m++;
        }
        _putchar ('\n');
}
