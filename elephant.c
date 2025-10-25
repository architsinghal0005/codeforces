#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("%d", x/5);
    }
    if (x % 5 != 0)
    {
        printf("%d", x / 5 + 1);
    }
    return 0;
}