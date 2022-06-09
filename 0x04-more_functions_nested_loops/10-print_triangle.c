#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - writes the character c to stdout
 * @a: The number to multiply
 * @b: The number to multiply
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
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
return 0;
}


