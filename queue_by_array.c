#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x ){
    if(rear==N-1){
        printf("Overflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("The dequeued element is %d ",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        for(int i=front; i<rear+1;i++){
            printf("%d",queue[i]);
        }
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        printf("The front element is %d ",queue[front]);
    }
}
int main(){
    enqueue(2);
    enqueue(3);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
}
