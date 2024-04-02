//Write a program to print sum of digits of a number
#include<stdio.h>
int main(){
    int n,sum=0,c,r;
    printf("Enter a number:-");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of the digits of %d is %d",c,sum);
    return 0;
}