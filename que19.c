//Write a program to check whether a number is armstrong or not
#include<stdio.h>
int main(){
    int n,arm=0,r,c;
    printf("Enter any number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm =(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("Armstrong number:");
    else{
        printf("Not armstrong number");
    }
    return 0;
}