#include <stdio.h>
int fact(int n);
int main(){
    int a;
    scanf("%d",&a);
    int ans;
    ans=fact(a);
    printf("%d",ans);
   }
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
    
}


// iterative way
// #include<stdio.h>
// int fact(int n);
// void main(){
//     int a;
//     scanf("%d",&a);
//     int ans=1,i=1;
//     while(i<=a){
//         ans=ans*i;
//         i=i+1;
//     }
//     printf("%d",ans);
// }
