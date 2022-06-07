#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: 'print 10 times alphabey'
 *
 * Return: no
 */
int _islower(int c)
{
if (c == tolower(c)){
return 1;
}
else
{
return 0;
}
}