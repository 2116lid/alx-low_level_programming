#include <stdio.h>
/**
*main-Entry point
*Return: Always 0 (sucssess)
*/
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
i++;
if (i <= 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
