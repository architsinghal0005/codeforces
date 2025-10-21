#include <stdio.h>

int main() {
   int n,k,i,ld;
   scanf("%d %d",&n,&k);
   for(i=0;i<k;i++)
   {
     ld=n%10;
    if(ld!=0)
    {
        n=n-1;
    }
    else
    {
        n=n/10;
    }
   }
   printf("%d",n);
    return 0;
}