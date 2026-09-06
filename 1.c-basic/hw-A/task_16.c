#include <stdio.h>



int main(void)
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    int stat = 0;

    stat = (a > b) ? 1 : 0;
    stat = (c > b && c > a) ? 1 : 0;

    (stat) ? printf("YES\n") : printf("NO\n");
    return 0;
}