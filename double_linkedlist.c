#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void creation(){
    struct node *head,*newnode,*tail;
    head =0;
    int choice;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("Do you want to continue :- press 1 for Yes, 0 for NO ");
        scanf("%d",&choice);
        if(choice==0){
            printf("Your list is as follows :-\n");
        }
    }
    //function to display the list.
    tail=head;
    while(tail!=0){
        printf("%d ",tail->data);
        tail=tail->next;
    }
}
void insert_at_beginning(){
    struct node *newnode, *head,*tail;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data :- ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void insert_at_end(){
    struct node *newnode, *head,*tail;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data :- ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insert_at_pos(){
    
    int pos,length;
    int i=1;
    printf("Enter the position :- ");
    scanf("%d",&pos);
    
    if (pos<1 || pos>length){
        printf("Invalid position");
    }
    else if(pos==1){
        insert_at_beginning();
    }
    else{
        struct node *newnode, *head,*tail,*temp;
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;

    }
}
void insert_after_pos(){
    int pos,length;
    int i=1;
    printf("Enter the position :- ");
    scanf("%d",&pos);
    
    if (pos<1 || pos>length){
        printf("Invalid position");
    }
   
    else{
        struct node *newnode, *head,*tail,*temp;
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        while(i<pos){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;

    }
}
void del_from_beg(){
    struct node *head,*temp;
    if(head==0){
        printf("List is empty");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=0;
        free(temp);
    }    
}
void del_from_end(){
    struct node *head,*tail,*temp;
    if(head==0){
        printf("List is empty");
    }
    else{
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);
    }
}
void del_from_pos(){
    struct node *head,*temp;
    int pos,i=1;
    temp=head;
    printf("Enter the position :- ");
    scanf("%d",&pos);
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
int main(){
    creation();
    return 0;
}
