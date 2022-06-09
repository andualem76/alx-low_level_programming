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
void print_square()
{
char i;
for (i = 1; i <= 100; i++){
if(i % 3 == 0 && i % 5 != 0){
    printf("Fizz");
}
if(i % 5 == 0 && i % 3 != 0){
    printf("Buzz");
}
if(i % 5 == 0 && i % 3 == 0){
    printf("FizzBuzz");
}
return 0;
}


