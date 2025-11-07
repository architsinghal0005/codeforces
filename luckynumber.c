#include <stdio.h>
int main()
{
    long long int n;
    int  k, count = 0;
    scanf("%lld", &n);
    while (n > 0)
    {
        k = n % 10;

        if (k == 4 || k == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
