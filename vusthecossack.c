#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (m >= n)
    {
        if (k >= n)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}