#include <stdio.h>

int main() {
    int n,reversed=0,remainder;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    printf("reversed number:%d\n",reversed);
    return 0;
}
