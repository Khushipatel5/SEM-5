#include <stdio.h>
#include <time.h>
#define N 100000
int arr[N];
void selection_sort(int arr[],int n){
    for (int i=0;i<n;i++){
         int min_element=arr[i];
        for (int j=i+1;j<n;j++){
            if(arr[i]<min_element){
            min_element=arr[i];
        }
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=min_element;
        } 
        }
}

int readArray(const char *filename,int arr[],int n){
    FILE *f=fopen(filename,"r");
    if(!f){
        printf("CANNOT OPEN FILE");
    }
    for(int i=0;i<n;i++){
        fscanf(f,"%d ",&arr[i]);
    }
    fclose(f);
    return 1;
}

void main(){
    clock_t start,end;
    double timetaken;
    start=clock();
    if(readArray("D:/SEM5/DAA_LAB/array/average_case_100000.txt",arr,N)){
        selection_sort(arr,N);
        end=clock();
        timetaken=((double)end-start)/CLOCKS_PER_SEC *1000;
        printf("%f",timetaken);
    }
}
