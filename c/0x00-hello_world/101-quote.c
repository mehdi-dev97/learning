#include <unistd.h>

/**
 * main - Entry point
 * Return: Always (1)
*/

int main(void)
{
    char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int i = 0;

    while (str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
    return (1);
}