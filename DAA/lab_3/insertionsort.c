#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
void insertion_sort(int arr[], int n){
       for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j = j - 1;          
        }
        arr[j + 1] = key; 
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
    int arr[N];
    clock_t start,end;
    double timetaken;
    start=clock();
    if(readArray("D:/SEM5/DAA_LAB/array/worst_case_100.txt",arr,N)){
        insertion_sort(arr,N);
        end=clock();
        timetaken=((double)end-start)/CLOCKS_PER_SEC*1000;
        printf("%f",timetaken);
    }
}