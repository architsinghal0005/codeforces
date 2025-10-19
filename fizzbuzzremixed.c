#include <stdio.h>

int main() {
    int n,a,count = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){

        scanf("%d",&a);
        int l = a/15;
        int r = a%15;
        count = l*3;
        if(r>=2){
            count += 3;
        }
        else{count += 1+r;}
    printf("%d\n",count);
    }
    return 0;
}