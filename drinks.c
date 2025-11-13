#include <stdio.h>

int main()
{
    int n, i,p;
    float sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        sum = sum + p;
    }
    printf("%f", sum / n);

    return 0;
}