//Write a c program to convert fahrenheit to celcius & celcius to fahrenheit using switch case
#include<stdio.h>
#include<stdlib.h>
void fahrenheit(){
    int fah,cel;
    printf("enter the temp in celcius:");
    scanf("%d",&cel);
    fah=(9*cel+160)/5;
    printf("%dthe temp in fahrenheit\n:",fah);
    }
    void celcius(){
    int fah,cel;
    printf("enter the temp in fahrenheit:\n" );
    scanf("%d",&fah);
    cel=(5*fah-160)/9;
    printf("%dthe temp in celcius:\n",cel);
    }
    int main(){
        int choice;
        while(1){
            printf("press 1 for celcius to fahrenheit\n");
            printf("press 2 for fahrenheit to celcius\n");
            printf("press 3 for exit\n");
            printf("enter your choice");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                   fahrenheit();
                   break;
                case 2:
                    celcius();
                    break;
                case 3:
                    printf("exiting program\n");
                    exit(0);
                default:
                    printf("choose the correct option");
            }
        }
        return 0;
    }