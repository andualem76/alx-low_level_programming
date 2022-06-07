#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char print_alphabet()
{
char a;
for(a = 'A'; a < 'Z'; ++a)
putchar(tolower(a));
return 0;
}