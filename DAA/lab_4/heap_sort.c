#include <stdio.h>
#include <time.h>
#define N 10000

void max_heapify(int a[],int i,int n){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n &&a[left]>a[largest]){
        largest=left;
    }
    if(right<n &&a[right]>a[largest]){
        largest=right;
    }
    if(largest!=i){
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=a[temp];
        max_heapify(a,largest,n);
    }

}
void heap_sort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
    max_heapify(a,i,n);
   }
    for(int i=n-1;i>0;i--){
        int temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        max_heapify(a,0,i);
    }
}
int readArray(const char *filename,int arr[],int n){
    FILE *f=fopen(filename,"r");
    if(!f){
        printf("CANNOT OPEN FILE %s\n",filename);
    }
    for(int i=0;i<n;i++){
        fscanf(f,"%d ",&arr[i]);
    }
    fclose(f);
    return 1;
}
int main(){
    int arr[N];
    clock_t start,end;
    double timetaken;
    readArray("D:/SEM5/DAA_LAB/array/average_case_10000.txt",arr,N);

        start=clock();
        heap_sort(arr,N);
        end=clock();
        timetaken=((double)end-start)/CLOCKS_PER_SEC*1000;
        printf("%f",timetaken);
    }