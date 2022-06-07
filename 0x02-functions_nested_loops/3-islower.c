#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * c - charcter
 *
 * Description: 'print 10 times alphabey'
 *
 * Return: no
 */
int _islower(int c)
{
if (c == tolower(c) && c != 0 && c != 20)
{
return (1);
}
else
{
return (0);
}
}
