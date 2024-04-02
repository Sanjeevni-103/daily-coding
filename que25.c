//Write a c program to input marks of five subjects and display them using array
#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("enter marks:-");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",marks[i]);
    }
    return 0;
}