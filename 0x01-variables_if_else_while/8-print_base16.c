#include <stdio.h>
/**
*main-Entry point
*Return: Always 0 (sucssess)
*/
int main(void)
{
int i = 48;
char lower = 'a';
while (i < 58)
{
putchar(i);
i++;
}
while (lower <= 'f')
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
