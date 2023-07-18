#include "main.h"
/**
*print_alphabet-a function that prints lowercase alphabets needs main function.
*/
void print_alphabet(void)
{
char lower = 'a';
while (lower <= 'z')
{
_putchar(lower);
lower++;
}
_putchar('\n');
}
