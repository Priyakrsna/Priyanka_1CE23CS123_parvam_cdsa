#include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("enter the number of elements :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}

