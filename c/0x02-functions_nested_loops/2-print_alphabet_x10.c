#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 in output stream
*/
void print_alphabet_x10(void)
{
    int ch, i = 0;

    for (i = 0; i <= 9; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
}