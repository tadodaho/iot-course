#include <stdio.h>



int main(void)
{
    unsigned int a;
    scanf ("%u", &a);
    printf("%u\n", (a / 100) * (a % 100 / 10) * (a % 10));
}