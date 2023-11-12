#include "main.h"

/**
 * fibonacci - print 50 fibonacci sequence
 * Return: Nothing
*/
void fibonacci(void)
{
    int i, result;

    for (i = 1; i <= 6; i++)
    {
        result = i + i;
        printf("%d, ", result);
    }
    printf("\n");
}

/** 
 * 1, 2, 3, 4, 5, 6
 * 2, 3, 
*/