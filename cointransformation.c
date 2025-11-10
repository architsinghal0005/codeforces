#include <stdio.h>

int main()
{
    int t, i;
    long long int n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        long long int count = 1;
        if (n <= 3)
        {
            printf("1");
        }
        else
        {
            while (n > 3)
            {
                n = n / 4;
                count = count * 2;
            }
            printf("%lld\n", count);
        }
    }

    return 0;
}