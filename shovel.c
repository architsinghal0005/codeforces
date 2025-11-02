#include <stdio.h>

int main()
{
    int k, r, i = 1;
    scanf("%d %d", &k, &r);

    while (1)
    {
        int total = k * i;
        if (total % 10 == 0 || total % 10 == r)  
        {
            printf("%d", i);
            break;
        }
        i++;
    }

    return 0;
}
