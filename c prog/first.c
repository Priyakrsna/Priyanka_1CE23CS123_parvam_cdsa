#include<stdio.h>
int main(){
    int a,b;
    a =  1;
    b = (++a )+ (a++);
    printf("\na=%d\tb=%dn",a,b);
    printf("\n%d\t%d", a, a++);
  return 0;
}