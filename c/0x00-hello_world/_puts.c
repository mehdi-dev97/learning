#include <unistd.h>
/**
 * _puts - print string on terminal
 * Return: Always(0)
*/

int _puts(char str[])
{
    int i = 0;

    while(str[i] != '\0') {
        write(1, str[i], 1);
    }
    return (0);
}