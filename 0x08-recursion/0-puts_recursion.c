#include "main.h"
/**
*_puts_recursion - 1st_task's function
*@s: input_iterator_tag
*Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(++s);
}
else
_putchar('\n');
}
