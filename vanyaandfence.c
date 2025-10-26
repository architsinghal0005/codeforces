#include <stdio.h>

int main()
{
    int n, h, i, a, count1 = 0, count2 = 0;
    scanf("%d %d", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a <= h)
        {
            count1++;
        }
        else
        {
            count2 += 2;
        }
    }
    printf("%d", count1 + count2);
    return 0;
}