//Write a program that keep taking numbers as input,until users enter an odd number
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number:");
        scanf("%d",&n);
    }
    while(n%2==0);
    return 0;
}