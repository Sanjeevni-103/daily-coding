//write a program to print avg of three number
#include<stdio.h>
int main(){
    int num1,num2,num3,sum;
    float avg;

    printf("enter the first number:\n");
    scanf("%d",&num1);
    printf("enter the second number:\n");
    scanf("%d",&num2);
    printf("enter the third number:\n");
    scanf("%d",&num3);
    sum=num1+num2+num3;
    avg=sum/3.0;
    printf("enter the avg of three number%f",avg);
    return 0;
    
}