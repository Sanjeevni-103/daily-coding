//Write a c program to print the sum of n natural numbers
#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}