#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int days1 = 0, days2 = 0;
    if (a > b || a < b)
    {
        while (b > 0 && a > 0)
        {
            days1++;
            a--;
            b--;
        }

        if (b == 0)
        {
            days2 = a / 2;
        }
        else if (a == 0)
        {
            days2 = b / 2;
        }
        printf("%d %d", days1, days2);
    }
    else
    {
        printf("%d 0", a);
    }
    return 0;
}