#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int totallitres = k * l, totalslices = c * d;
    int perlitres = (k * l) / n, perslices = (c * d) / n, persalt = p / n;
    int r, s, t;
    r = perlitres / nl;
    s = perslices / 1;
    t = persalt / np;
    if (s <= r && s <= t)
    {
        printf("%d", s);
    }
    else if (t <= s && t <= r)
    {
        printf("%d", t);
    }
    else
    {
        printf("%d", r);
    }

    return 0;
}