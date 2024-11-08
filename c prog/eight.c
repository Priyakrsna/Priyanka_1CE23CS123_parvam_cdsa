#include <stdio.h>

int main() {
    int num;
    int binary[50];
    printf("Enter a number:");
    scanf("%d",&num);
    int i=0;
    while(num>0)
    { 
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
