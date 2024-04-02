//Write a program to find total number of odd numbers present in an array and print them
#include<stdio.h>
int main(){
    int count=0;
    int arr[6]={4,7,9,1,5,3};
    for(int i=0;i<6;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
            count++;
        }
    }
    printf("total no of odd elements is %d ",count);
    return 0;
}