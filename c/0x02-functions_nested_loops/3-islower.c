#include "main.h"

/**
 * _islower - check if string is lower
 * @c: char
 * Return: 1 if char is lower or 0 on otherwise
*/
int _islower(int c)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if(c == ch)
        {
            return (1);
        }
    }
    return (0);
}