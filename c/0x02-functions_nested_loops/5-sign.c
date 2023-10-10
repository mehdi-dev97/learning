#include "main.h"

/**
 * print_sign - print sign number.
 * @n: number
 * Return: 1 if sign is posetive, 0 if sign is zero or -1 if sign is negative.
*/

int print_sign(int n)
{
    if(n > 0)
    {
        _putchar('+');
        return (1);
    } 
    else if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else
    {
        _putchar('-');
        return (-1);
    }
}