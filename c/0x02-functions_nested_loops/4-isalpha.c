#include "main.h"

/**
 * _isalpha - check char is in alphabet range [a-z A-Z].
 * @c: char
 * Return: 1 if is in range or 0 in otherwise.
 * 
*/
int _isalpha(int c)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (c == ch)
        {
            return (1);
        }
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        if(c == ch)
        {
            return (1);
        }
    }
    return (0);
}