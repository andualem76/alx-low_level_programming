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
/* print_alphabet print list of alphabet*/
void print_alphabet(void)
{
/* print_alphabet print list of alphabet*/
char a;
for (a = 'A'; a <= 'Z'; ++a)
putchar(tolower(a));

putchar('\n');
}
