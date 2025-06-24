#include <stdio.h>
#define size 100
int a[size];
int top=-1;

void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    top=top-1;
    
}

void push(int element){
    if(top==(size-1)){
        printf("overflow");
        return;
    }
    top=top+1;
    a[top]=element;
}
void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",a[i]);
        }    
   
    }
}
void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    display();
}