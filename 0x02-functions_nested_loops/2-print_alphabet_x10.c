#include "main.h"
/**
*print_alphabet_x10 - prints lowercase alphabets ten times.
*/
void print_alphabet_x10(void)
{
int i = 0;
char lower = 'a';
while (i < 10)
{
while (lower <= 'z')
{
_putchar(lower);
lower++;
}
_putchar('\n');
i++;
}
}
