#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        int count2 = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] == 2)
                count2++;
        }
        if (count2 % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            int half = count2 / 2;
            int seen = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 2)
                    seen++;

                if (seen == half)
                {
                    printf("%d\n", i + 1); 
                    break;
                }
            }
        }
    }

    return 0;
}
