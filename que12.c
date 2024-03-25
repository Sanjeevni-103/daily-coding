//write a program to make a simple calculator of two input using switch case
#include<stdio.h>
#include<stdlib.h>
void addition(int a, int b){
    int sum = a+b;
    printf("sum of the two number is%d\n",sum);
}
void substraction(int a, int b){
    int sub = a-b;
    printf("sub of the two number is%d\n",sub);
}
void multiplication(int a, int b){
    int mul = a*b;
    printf("mul of the two number is%d\n",mul);
}
void division(int a, int b){
    int div = a/b;
    printf("div of the two number is%d\n",div);
}
int main(){
    int a, b,choice;
    while(1){
        printf("press1 for addtion\n");
        printf("press2 for substraction\n");
        printf("press3 for multiplication\n");
        printf("press4 for division\n");
        printf("press5 for exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter first number");
                scanf("%d",&a);
                printf("enter second number");
                scanf("%d",&b);
                addition(a,b);
                break;
            case 2:
                printf("enter first number");
                scanf("%d",&a);
                printf("enter second number");
                scanf("%d",&b);
                substraction(a,b);
                break;
            case 3:
                printf("enter first number");
                scanf("%d",&a);
                printf("enter second number");
                scanf("%d",&b);
                multiplication(a,b);
                break;
            case 4:
                printf("enter first number");
                scanf("%d",&a);
                printf("enter second number");
                scanf("%d",&b);
                division(a,b);
                break;
            case 5:
                printf("enter exiting program\n");
                exit(0);
            default:
                printf("choose the correct option\n");
        }
    }
    return 0;
}