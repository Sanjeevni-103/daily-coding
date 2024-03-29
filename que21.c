//Write a program to print multiplication table of a given number
#include<stdio.h>
int main(){
    int n,i,mul;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul=n*i;
        printf("%d * %d = %d",n,i,mul);
        printf("\n");
    }
    return 0;

}