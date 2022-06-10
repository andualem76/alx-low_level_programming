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
int main(void)
{
char i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
putchar((i % 10) + '0');
}
}
putchar('\n');
return 0;
}

