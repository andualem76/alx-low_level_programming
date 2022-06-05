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
int f;

for (c = 0; c < 10; ++c)
{
for (d = 0; d < 10; ++d)
{

/*second number*/
for (e = 0; e < 10; ++e)
{
for (f = 0; f < 10; ++f)
{
if (c <= e && d <= f)
{
putchar((c % 10) + '0');
putchar((d % 10) + '0');
putchar(' ');
putchar((e % 10) + '0');
putchar((f % 10) + '0');
if (c == 9 && d == 8 && e == 9 && f == 9)
{
continue;
}

putchar(',');
putchar(' ');

}
}
}


}
}

putchar('\n');
return (0);
}
