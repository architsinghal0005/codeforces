#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0;

    char str1[4] = "++X";
    char str2[4] = "X++";
    char str[4];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);

        if (strcmp(str, str1) == 0 || strcmp(str, str2) == 0)
        {
            a++;
        }
        else
        {
            a--;
        }
    }

    printf("%d\n", a);
    return 0;
}
