#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void creation(){
    struct node *head,*newnode,*temp;
    int choice;
    head = 0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }    
        temp->next=head;
        printf("Do you want to continue? Press 1 for YES and 0 for EXIT ");
        scanf("%d",&choice);
    }
    printf("Your list is follwos \n");
    temp=head;
    while(temp->next!=head){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);    
}
void creation_using_tail(){
    struct node *tail, *newnode;
    int choice;
    tail = 0;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (tail==0){
            tail = newnode;
            tail->next=newnode;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("Do you want to continue? Press 1 for YES and 0 for NO ");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp, *tail;
    if (tail==0){
        printf("List is Empty ");
    }
    else{
        temp= tail->next;
    }    
    while(temp->next!=tail->next){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}
void insert_at_beg(){
    struct node *tail,*newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
    }
}
void insert_at_end(){
    struct node *tail, *newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_at_specific_pos(){
    struct node *tail, *newnode,*temp;
    int pos,i=1,l;
    l=getlength();
    printf("Enter the pos to insert :- ");
    scanf("%d",pos);
    if(pos<0 || pos>l){
        printf("Invalid position");
    }
    else if(pos == 1){
        insert_at_beg();
    }
    else{
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=tail->next;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
}
void delete_from_beg(){
    struct node *tail,*temp;
    temp=tail->next;
    if(tail==0){
        printf("List is empty");
    }
    else if(temp->next==temp){
        tail=0;
        free(temp);
    }
    else{
        tail->next=temp->next;
        free(temp);
    }
}
void delete_from_end(){
    struct node *tail, *current,*previous;
    current = tail->next;
    if(tail==0){
        printf("List is Empty");
    }
    else if(current->next=current){
        tail=0;
        free(current);
    }
    else{
        while(current->next!=tail->next){
            previous =current;
            current=current->next;
        }
        previous->next=tail->next;
        tail=previous;
        free(current);
    }
}
void delete_from_pos(){
    struct node *current,*nextnode,*tail;
    int pos, i=1, l;
    l=getlength();
    current=tail->next;
    printf("Enter the postion :- ");
    scanf("%d",&pos);
    if(pos<1 || pos>l){
        printf("Invalid position");
    }
    else if(pos == 1){
        delete_from_beg();
    }
    else{
        while(i<pos-1){
            current=current->next;
            i++;
        }
        nextnode=current->next;
        current->next=nextnode->next;
        free(nextnode);
    }
}