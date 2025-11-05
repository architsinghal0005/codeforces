#include <stdio.h>

int main()
{
    int x1, x2, x3, i;
    scanf("%d %d %d", &x1, &x2, &x3);
    int arr[3] = {x1, x2, x3}, diff = 0, count = 0, temp;
    for (i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int median = arr[1];
    for (i = 0; i < 3; i++)
    {
        diff = arr[i] - median;
        if (diff < 0)
            diff = -diff;
        count += diff;
    }

    printf("%d\n", count);
    return 0;
}
