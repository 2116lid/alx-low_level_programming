#include <stdio.h>
/**
*main-Entry point
*Return: Always 0 (sucssess)
*/
int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
