#include <stdio.h>

int main()
{
    int a, b, year = 0;
    scanf("%d %d", &a, &b);
    while (year >= 0)
    {
        a = a * 3;
        b = b * 2;
        year++;
        if (a > b)
        {
            printf("%d", year);
            break;
        }
    }
    return 0;
}