#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet()
{
char a;
for(a = 'A'; a < 'Z'; ++a)
putchar(tolower(a));
putchar('\n');
return 0;
}