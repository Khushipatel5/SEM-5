#include<stdio.h>
int sum(int n);
void main(){
    int a;
    scanf("%d",&a);
    int ans=0,i=0;
    while(i<=a){
        ans=ans+i;
        i=i+1;
    }
    printf("%d",ans);
}

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+ n;
    }
}

// iterative way
// #include<stdio.h>

// void main(){
//     int a;
//     scanf("%d",&a);
//     int ans=0,i=0;
//     while(i<=a){
//         ans=ans+i;
//         i=i+1;
//     }
//     printf("%d",ans);
// }