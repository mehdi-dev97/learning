#include "main.h"

/**
 * print_to_98 - print list of number from n to 98
 * @n: number to start
 * Return: Nothing
*/
void print_to_98(int n)
{
    int i, end = 98;

    if (n > end)
    {
        for (i = n; i >= end; i--)
        {
            printf("%d", i);
            if (i > end)
            {
                printf(", ");
            }
        }
    }
    else
    {
        for (i = n; i <= end; i++)
        {
            printf("%d", i);
            if (i < end)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
}