#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    int i=0;
    if(a==0){
        printf("1");
        
    }
    else{
    while(a!=0){
        a=a/10;
        i=i+1;
    }
    printf("%d",i);
}
}

// #include<stdio.h>
// int count(int n);
// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     if(a==0){
//         b=1; 
//     }
//     else{
//         b=count(a);
//     }
//     printf("%d",b);
// }

// int count(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return 1+count(n/10);
//     }
// }
