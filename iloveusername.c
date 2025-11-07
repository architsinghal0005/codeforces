#include <stdio.h>

int main()
{
    int n, p;
    scanf("%d\n", &n);
    int a[n], i, count1 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    };
    int max = a[0], min = a[0];
    for (i = 1; i < n; i++)
    {

        if (a[i] > max)
        {
            count1++;
            max = a[i];
        }
        else if (a[i] < min)
        {
            count1++;
            min = a[i];
        }
    }
    printf("%d", count1);

    return 0;
}