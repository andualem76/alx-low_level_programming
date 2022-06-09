#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
int i;
int isdigit = 0;
for (i = 0; i < 10; i++){
if (c == i){
isdigit = 1;

}
}
if(isdigit == 1){
return (1);
}
else{
return (0);
}
}
