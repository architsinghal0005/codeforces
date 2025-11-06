#include <stdio.h>

int main()
{
    int t, a, b, c, d, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int count = 0;
        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }
        printf("%d\n", count++);
    }

    return 0;
}