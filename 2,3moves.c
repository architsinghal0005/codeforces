#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);

        int ans;
        if (n == 1) {
            ans = 2;
        } else if (n == 2 || n == 3) {
            ans = 1;
        } else {
            ans = (n + 2) / 3;  
        }

        printf("%d\n", ans);
    }

    return 0;
}