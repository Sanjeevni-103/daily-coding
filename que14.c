//Write a c program to print all the odd numbers btw 10-55
#include<stdio.h>
int main(){
    int i;
    for(i=10;i<=55;i++){
        if(i%2!=0)
        printf("%d ", i );
    }
    return 0;
}