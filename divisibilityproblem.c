#include <stdio.h>

/*int main()
{
    int t, a, b, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        int count = a;
        while (a % b != 0)
        {
            a++;
        }
        printf("%d\n", a - count);
    }

    return 0;
}*/
#include <stdio.h>

int main()
{
    int t, a, b, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);

        int result = (b - (a % b)) % b;

        printf("%d\n", result);
    }

    return 0;
}
