#include "main.h"
/**
 *_puts recursion - prints a string followed by a new line.
 *@s: pointer to string.
 *
 *Return: void.
 */
void puts recursion (char *s)
{
       if (*s == "10') /* base case */
       {
               _putchar ("In');
	       return;
       }
       _putchar (*s);
       _puts_recursion(s + 1);
}




