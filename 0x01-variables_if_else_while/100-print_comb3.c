#include <stdio.h>

/**
 * main - program that prints the numbers from 01 to 89
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * you can only use the putchar function
 * Return: 0
 */
int main(void)
{
int i;
int j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (j == 57 && i == 56)
{
break
;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
