#include "main.h"

/**
 * _input_recurseion - function
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	 if (*s == '\0') 
		 _putchar('\n');
	 else
	 {
		 _putchar(*s);
		 _puts_recursion(s + 1);
	 }
}
