#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;
double doubleType;
char charType;

// sizeof evaluates the size of a variable
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
