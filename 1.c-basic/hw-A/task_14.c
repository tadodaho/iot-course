#include <stdio.h>



int main(void)
{
    int a, b, c, val, max;
    scanf ("%d", &val);

    a = val / 100;
    b = val % 100 / 10;
    c = val % 10;

    max = (a > b) ? a : b;
    max = (c > max) ? c : max;
    printf("%d\n", max);
    return 0;
}