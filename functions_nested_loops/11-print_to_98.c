#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all numbers from n to 98
* @n: starting number
*
* Return: nothing
*/
void print_to_98(int n)
{
int current;

if (n <= 98)  /* counting up */
{
for (current = n; current <= 98; current++)
{
printf("%d", current);
if (current != 98)
printf(", ");
}
}
else  /* counting down */
{
for (current = n; current >= 98; current--)
{
printf("%d", current);
if (current != 98)
printf(", ");
}
}

printf("\n");
}
