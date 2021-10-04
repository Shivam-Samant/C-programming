#include<stdio.h>
int Partition(int arr[], int Low,int High){
    int Pivot=arr[Low];
    int i=Low+1;
    int j=High;
    int temp;
    do{
    while(arr[i]<=Pivot){
        i++;
    }
      while(arr[j]>Pivot){
        j--;
    }
    if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);
    // (low+1) element to (high-1) element  
    // low+1: if we are doing smaller than pivot element on left side 
    // and greater than pivot element on right side  
    // then pivot is automatically come in his right position

    //high: because in comparision the last element can't count
    temp=arr[Low];
    arr[Low]=arr[j];
    arr[j]=temp;
    return j;
}
void QuickSort(int arr[],int Low,int High){
    int PartitionIndex;  //Index of pivot after partition;
    if(Low<High){
    PartitionIndex=Partition(arr,Low,High);
    QuickSort(arr,Low,PartitionIndex-1); // sort left subarray
    QuickSort(arr,PartitionIndex+1,High); // sort right subarray
    }
}
int main(){
    // int arr[]={1,9,3,8,7,2,0,4,3,5,8,9,2,5,0,9};
    int arr[]={1,9,3,8,7,2};
    int size=sizeof(arr)/sizeof(int);
    QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++){printf(" %d ",arr[i]);}
    return 0;
}