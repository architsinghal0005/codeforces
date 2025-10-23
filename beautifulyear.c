#include <stdio.h>

int main()
{
    int y,  a, b, c, d;
    scanf("%d", &y);
    int i=y+1;
    while (i >0)
    {

        int year = i;
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            printf("%d", year);
            break;
        }
        i++;
    }

    return 0;
}