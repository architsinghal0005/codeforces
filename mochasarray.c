#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int h = gcd(arr[i], arr[j]);

                if (h == 1 || h == 2)
                {
                    ans = n - 1;
                    break;
                }
            }
            if (ans == n - 1)
                break;
        }

        if (ans == n - 1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
