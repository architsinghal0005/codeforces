#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int sum = 0;

        for (int i = 0; i < 2; i++)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}