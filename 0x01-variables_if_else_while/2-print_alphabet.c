#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'A'; c <= 'Z'; ++c)
putchar(tolower(c));

putchar("\n");
return (0);
}
