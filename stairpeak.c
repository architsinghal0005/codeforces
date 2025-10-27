#include <stdio.h>

int main()
{
    int t, a, b, c, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (b > a && b < c)
        {
            printf("STAIR");
        }
        else if (b > a && b > c)
        {
            printf("PEAK");
        }
        else
        {
            printf("NONE");
        }
        printf("\n");
    }

    return 0;
}