#include <stdio.h>

int main()
{
    int t, i, a, b, c;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ((a < c && a > b) || (a > c && a < b))
        {
            printf("%d", a);
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            printf("%d", b);
        }

        else if ((c < a && c > b) || (c > a && c < b))
        {
            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}