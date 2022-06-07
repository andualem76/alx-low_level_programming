#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_alphabet - Entry point
 * 
 * Description: 'print alphabey'
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{

char a;
for (a = 'A'; a <= 'Z'; ++a)
putchar(tolower(a));

putchar('\n');
}
