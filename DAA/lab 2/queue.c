#include <stdio.h>
#define size 100
int a[size];
int f=-1,r=-1;
void dqinsert_rear(int data){
    if(r>=size){
        printf("overflow");
        return;
    }
    r=r+1;
    a[r]=data;
    if(f==-1){
        f=0;
    }
    return;
 }
 void dqdeletefront(){
    if(f==-1){
        printf("underflow");
        return;
    }
    if(f==r){
        f=-1;
        r=-1;
    }
    else{
        f=f+1;
    }
 }
 void traversal(){
    for(int i=f;i<=r;i++){
        printf("%d \n",a[i]);
    }
 }

 void main(){
    dqinsert_rear(10);
    dqinsert_rear(20);
    dqinsert_rear(30);
    dqdeletefront();
    dqinsert_rear(40);
    traversal();
 }