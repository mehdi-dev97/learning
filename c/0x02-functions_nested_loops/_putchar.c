#include <unistd.h>

/**
 * _putchar - put string in upstream
 * @ch: char
 * Return: character to write
*/

char _putchar(char ch)
{
    return (write(1, &ch, 1));
}