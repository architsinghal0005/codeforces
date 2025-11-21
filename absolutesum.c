#include <stdio.h>

int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int diff = a[n-1] - a[0];
        if (a[n-1] != -1 && a[0] != -1)
        {
            if (diff < 0)
            {
                diff = -diff;
                printf("%d\n", diff);
            }
            else
            {
                printf("%d\n", diff);
            }
        for (j = 0; j < n; j++)
            {
                if (a[j] == -1)
                {
                    a[j] = 0;
                    printf("%d ", a[j]);
                }
                else
                    printf("%d ", a[j]);
            }
            printf("\n");
        }
         if (a[n-1] == -1 && a[0] != -1)
        {
            printf("0\n");
            a[n-1] = a[0];
            for (j = 0; j < n; j++)
            {
                if (a[j] == -1)
                {
                    a[j] = 0;
                    printf("%d ", a[j]);
                }
                else
                    printf("%d ", a[j]);
            }
            printf("\n");
        }
         if (a[n-1] != -1 && a[0] == -1)
        {
            printf("0\n");
            for (j = 0; j < n; j++)
            {
                a[0] = a[n-1];
                if (a[j] == -1)
                {
                    a[j] = 0;
                    printf("%d ", a[j]);
                }
                else
                    printf("%d ", a[j]);
            }
            printf("\n");
        }
        if(a[n-1] == -1 && a[0] == -1)
        {
            printf("0\n");
            for (j = 0; j < n; j++)
            {
                if (a[j] == -1)
                {
                    a[j] = 0;
                    printf("%d ", a[j]);
                }
                else
                    printf("%d ", a[j]);
            }
            printf("\n");
        }
    }

    return 0;
}