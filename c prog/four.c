#include <stdio.h>

int main(){
    int n;
    int x=0;
    int first=0,second=1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Fibonacci series is:");
    if(n==1)
    {
        printf("%d\n",0);
    }
    if(n>1)
    {
        printf("%d\n%d\n",0,1);
    }
    for(int i=0;i<n-2;i++)
    { 
        x=first+second;
        printf("%d\n",x);
        first=second;
        second=x;
    }
    
    return 0;
}
