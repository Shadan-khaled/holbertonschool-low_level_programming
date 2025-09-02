#include "main.h"
#include <stdio.h>

int main(void)
{
    /* تعريف جميع المتغيرات أولًا */
    int a = 98;
    int b = 42;
    char s1[200] = "Hello "; /* وسع المصفوفة لتجنب overflow */
    char s2[] = "World!\n";
    char *ptr;

    /* swap_int */
    printf("قبل swap: a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("بعد swap: a=%d, b=%d\n\n", a, b);

    /* _strncat */
    printf("قبل _strncat:\n%s", s1);
    printf("%s", s2);

    ptr = _strncat(s1, s2, 1);
    printf("\nبعد دمج 1 حرف:\n%s", s1);
    printf("%s", s2);
    printf("%s\n", ptr);

    ptr = _strncat(s1, s2, 1024);
    printf("\nبعد دمج كامل:\n%s", s1);
    printf("%s", s2);
    printf("%s\n", ptr);

    return (0);
}

