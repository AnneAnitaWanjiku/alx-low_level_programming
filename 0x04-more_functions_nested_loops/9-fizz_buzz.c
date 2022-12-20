#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new lin
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf(" FizzBuzz");
}
else if (n % 3 == 0)
{
printf(" Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
if (n != 100)
{
print(" ");
}
}
printf("\n");
return (0);
}
