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

for (c = 0; c < 10; ++c)
putchar((c % 10) + '0');

for (c = 'A'; c <= 'F'; ++c)
putchar(tolower(c));


putchar('\n');
return (0);
}
