//write a program to print factorial of a given number
#include<stdio.h>
int main(){
    int fact=1,i,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}