#include "main.h"

/**
 * print_alphabet - print alphabet in output stream
 * Return: Nothing
*/

void print_alphabet(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
}