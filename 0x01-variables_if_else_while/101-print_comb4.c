#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int a;
int b;
for (i = 48; i < 58; i++)
{
for (a = 49; a < 58; a++)
{
for (b = 50; b < 58; b++)
{
if (b > a && a > i)
{
putchar(i);
putchar(a);
putchar(b);
if (i != 55 || a != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
