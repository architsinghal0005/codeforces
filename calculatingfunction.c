#include <stdio.h>

int main()
{
    long long int n, result;
    scanf("%lld", &n);

    long long int even = n / 2;
    long long int odd = (n + 1) / 2;

    result = (even * (even + 1)) - (odd * odd);

    printf("%lld", result);

    return 0;
}
