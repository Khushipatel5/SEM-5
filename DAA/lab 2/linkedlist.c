#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* link;
} *head=NULL;

void insert(int element){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data=element;
    new_node->link=NULL;

    if(head==NULL){
        head=new_node;
        return;
    }
    else{
        struct Node* temp = head;
        while(temp->link !=NULL){
            temp=temp->link;
        }
        temp->link = new_node;
    }

}

void deletelast(){
    struct Node* temp= head;
    struct Node* prev;
    while(temp->link!=NULL){
        prev = temp;
        temp=temp->link;
    }
    prev->link=NULL;
    free(temp);

}

void display(){
    struct Node* temp = head;
    if(temp==NULL){
        printf("List is empty");
        return;
    }
    
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    free(temp);
}
void main(){
    insert(10);
    insert(20);
    insert(10);
    insert(20);
    insert(10);
    insert(20);
    deletelast();
    display();
}
