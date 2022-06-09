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
void print_line(int n)
{
char i;
for (i = 0; i < n; i++){
putchar('_');
}
putchar('\n');

return 0;
}


