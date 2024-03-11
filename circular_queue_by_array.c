#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x){
    if(front == -1 && rear == -1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("Queue is full");
    }
    else{
        rear =(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else if(front == rear){
        printf("Dequeued element is %d\n",queue[front]);
        front = rear = -1;
    }
    else{
        printf("Dequeued element is %d\n",queue[front]);
        front=(front+1)%N;
    }
}
void display(){
    int i=front;
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        printf("Queue element are :- ");
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[i]);
    }
    printf("\n");
}
void peek(){
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        printf("The front data is %d \n",queue[front]);
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