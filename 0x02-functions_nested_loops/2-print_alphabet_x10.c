#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_alphabet - Entry point
 *
 * Description: 'print 10 times alphabey'
 *
 * Return: no
 */
void print_alphabet_x10(void)
{

char a;
int i;
for (i = 0; i < 10; ++i)
{
for (a = 'A'; a <= 'Z'; ++a)
putchar(tolower(a));
putchar('\n');
}
}
