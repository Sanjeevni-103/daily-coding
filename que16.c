//write a c program to reverse given number
#include<stdio.h>
int main(){
    int num,rev;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0){
        rev=num%10;
        printf("%d",rev);
        num=num/10;+
    }
    return 0; 
}