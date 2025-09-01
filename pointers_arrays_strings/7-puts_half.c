#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int len = 0;
int start;
/* Calculate string length */
while (str[len] != '\0')
len++;
/* Determine starting index */
if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;
/* Print from start index to end */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
 _putchar('\n');
}

