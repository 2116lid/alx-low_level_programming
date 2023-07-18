#include "main.h"
#include <unistd.h>
/**
* _putchar-uses char c for standard out
*
*Return- 1 (Sucssess) and -1 (failed)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
