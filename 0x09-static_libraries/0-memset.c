#include "main.h"

/**
  * _memset - main function of the prototype
  * @s: parameter s
  * @b: parameter b
  * @n: parameter n
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
