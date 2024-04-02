//Write a program to reverse the elements of the array
#include<stdio.h>
int main(){
    int i,j;
    int arr1[]={4,5,6,7,8,9};
    int arr2[6];
    for(i=5,j=0;i>=0,j<6;i--,j++){
        arr2[j]=arr1[i];
    }
    printf("Reversed array is");
    for(i=0;i<6;i++){
            printf("%d ",arr2[i]);
        }
    return 0;
}