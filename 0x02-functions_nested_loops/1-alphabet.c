#include "main.h"
#include <stdio.h>
#include <ctype.h>

/* print_alphabet print list of alphabet*/
void print_alphabet(void)
{

char a;
for (a = 'A'; a <= 'Z'; ++a)
putchar(tolower(a));

putchar('\n');
}
