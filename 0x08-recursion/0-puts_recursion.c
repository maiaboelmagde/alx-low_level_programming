#include "main.h"
/**
*_puts_recursion - 1st_task's function
*@s: input_iterator_tag
*Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');

}
