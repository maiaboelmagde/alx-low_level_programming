#include "main.h"
/**
*_print_rev_recursion - 1st task function
*@s: the string that would be reversed
**/
void _print_rev_recursion(char *s){
if (*s){
_print_rev_recursion(s+1);
_putchar(*s);
}
}
