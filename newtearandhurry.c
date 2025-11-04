#include <stdio.h>

int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int tl = 240 - k, tt = 0;
    for (i = 1; i <= n; i++)
    {
        tt = tt + 5 * i;
        if (tt > tl)
        {
            printf("%d", i - 1);
            return 0;
        }
    }
    printf("%d",n);

    return 0;
}