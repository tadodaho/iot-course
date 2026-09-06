#include <stdio.h>



int main(void)
{
    unsigned int num_month;
    scanf("%u", &num_month);

    if ((num_month == 1 || num_month == 2) || num_month == 12)
    {
        printf("winter\n");
        return 0;
    }
    
    if (num_month >= 3 && num_month <= 5)
    {
        printf("spring\n");
        return 0;
    }

    if (num_month >= 6 && num_month <= 8)
    {
        printf("summer\n");
        return 0;
    }

    if (num_month >= 9 && num_month <= 11)
    {
        printf("autumn\n");
        return 0;
    }

    return 0;
}