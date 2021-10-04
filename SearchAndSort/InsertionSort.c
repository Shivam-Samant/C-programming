#include<stdio.h>
void InsertionSort(int arr[],int size);
int main(){
    int arr[]={34,45,11,89,55,19,22,8,40};
    int size=sizeof(arr)/sizeof(int);
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){printf("\t %d\n",arr[i]);}
    return 0;
}
void InsertionSort(int arr[],int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        temp=arr[i];
        //for ascending order sorting arr[j]>temp
        //but for descending order sorting arr[j]<temp
        for(j=i-1;j>=0 && arr[j]>temp;j--){ 
            arr[j+1]=arr[j];
        }
            arr[j+1]=temp;
    }
}