#include <stdio.h>
int main(){
    int arr[]={25,102,103,159,45,76,46,67,65};
    int i,data;
    printf("Enter the data to search :- ");
    scanf("%d",&data);
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        if(arr[i]==data){
            printf("Data is found at index %d ",i);
            break;
        }
    }
    if(i==n){
        printf("Data not found");
    }
    return 0;
}