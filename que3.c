//write a program to print volume a cube
#include<stdio.h>
#include<math.h>

int main(){
    int side,vol;
    printf("enter the side of a cube:");
    scanf("%d",&side);
    vol=pow(side,3);
    printf("enter the volume of the cube%d",vol);
    return 0;

}