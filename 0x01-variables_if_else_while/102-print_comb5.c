#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
int d;

for (c = 0; c < 100; ++c)
{
for (d = 0; d < 100; ++d)
{
if (d > c)
{

putchar(c / 10 + '0');
putchar(c % 10 + '0');
putchar(' ');
putchar(d / 10 + '0');
putchar(d % 10 + '0');
if (c == 98 && d == 99)
{
continue;
}
putchar(',');
putchar(' ');

}
}
}

putchar('\n');
return (0);
}
