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
char v = "\n";
for (c = 'A'; c <= 'Z'; ++c)
putchar(tolower(c));

putchar(v);
return (0);
}
