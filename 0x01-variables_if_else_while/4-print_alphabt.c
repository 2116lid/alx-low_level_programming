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
if (lower != 'q' && lower != 'e')
{
putchar(lower);
}
lower++;
}
putchar('\n');
return (0);
}
