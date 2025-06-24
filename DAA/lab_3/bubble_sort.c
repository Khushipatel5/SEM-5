#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void bubble_sort(int arr[],int n){
    for(int i=1;i<n-1;i++){
        int swapped=0;
        for(int j=1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        if(swapped==0){
            break;
        }
        }
    }
}

int readArray(const char *filename,int arr[],int n){
    FILE *f=fopen(filename,"r");
    if(!f){
        printf("CANNOT OPEN FILE");
    }
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&arr[i]);
    }
    fclose(f);
    return 1;
}
void display_array(int arr[],int n){

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int arr[N];
    clock_t start,end;
    double timetaken;
    start=clock();
    if(readArray("D:/SEM5/DAA_LAB/array/worst_case_100.txt",arr,N)){
        bubble_sort(arr,N);
        end=clock();
        //time will be given in miliseconds
        timetaken=((double)end-start)/CLOCKS_PER_SEC *1000;
        printf("%f",timetaken);
    }
printf("\n");

}