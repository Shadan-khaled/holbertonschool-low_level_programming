#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int started = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
started = 1;
result = result * 10 + (*s - '0');
}
else if (started)
break;
s++;
}
return (result *sign);
}

