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
int e;

for (c = 0; c < 10; ++c)
{
for (d = 0; d < 10; ++d)
{
for (e = 0; e < 10; ++e)
{
if (d > c && e > d)
{
putchar((c % 10) + '0');
putchar((d % 10) + '0');
putchar((e % 10) + '0');
if (c == 7 && d == 8 && e == 9)
{
continue;
}
putchar(',');
putchar(' ');
}

}
}
}

putchar('\n');
return (0);
}
