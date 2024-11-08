 #include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d,square=%d\n",i,i*i);
        sum+=i*i;
    }
    printf("sum of square elements=%d",sum);
    
    return 0;
}
