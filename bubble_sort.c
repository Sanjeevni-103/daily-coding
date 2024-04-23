#include<stdio.h>
void bubble_sort(int arr[], int n){
    int i,j,temp,flag;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
int main(){
    int arr[]={9,3,5,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array :- ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nSorted array :- ");
    bubble_sort(arr,n);
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
//Time complexity of bubble sort is O(n^2).