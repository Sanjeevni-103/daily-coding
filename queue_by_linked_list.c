#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    newnode->data=x;
    if(front ==0 && rear==0){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear ==0){
        printf("Queue is empty");
    }
    else{
        temp=front;
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
void dequeue(){
    struct node *temp;
    temp=front;
    if (front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else{
        printf("Dequeued element is %d \n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek(){
     if (front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else{
        printf("The front data is %d \n",front->data);
    }
}
int main(){
    enqueue(2);
    enqueue(6);
    enqueue(7);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}