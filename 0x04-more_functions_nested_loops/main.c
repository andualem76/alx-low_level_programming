#include <stdio.h>
#include <ctype.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int size = 10;
char i;
char j;
for (i = 1; i < size; i++)
{

for (j = i;  j < size; j++)
{
putchar(' ');
}

for (j = i;  j > 0; j--)
{
putchar('#');
}

putchar('\n');
}

    return (0);
}