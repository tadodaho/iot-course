#include <stdio.h>



int main(void)
{
    unsigned int a, b, c, max;
    scanf("%u %u %u", &a, &b, &c);

    max = a;
    if (b > max)  max = b;
    if (c > max) max = c;

    ((a + b + c) - max > max) ? printf("YES\n") : printf("NO\n");

    return 0;
}