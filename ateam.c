#include <stdio.h>

int main() {
    int n,i,p,v,t,count=0;
    printf("enter the number of problems in the contest :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter 1 if you know the solution of the problem else enter 0\n");
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2)
        count++;
        printf("\n");
    }
    printf("%d",count);

    return 0;
}