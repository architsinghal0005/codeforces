#include <stdio.h>

int main()
{
    int t, i, j;
    int n;
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        scanf("%d", &n);
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        int max = a[0];
        int min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        printf("%d\n", max - min);
    }
    return 0;
}