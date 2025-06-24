#include<stdio.h>
int power(int x,int y);
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int ans;
    ans=power(a,b);
    printf("%d",ans);
}

int power(int x,int y){
    if(y==0){
        return 1;
    }
    else{
        return x*power(x,y-1);
    }
}

// #include<stdio.h>
// int count(int n);
// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     int i=0,ans=1;
//     while(i<b){
//         ans=ans*a;
//         i=i+1;
//     }
//     printf("%d",ans);
// }