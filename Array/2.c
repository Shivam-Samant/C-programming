// // Reverse an array
#include<stdio.h>
void Reverse(int *arr,int size){
    for(int i=0;i<(size)/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    
    printf("ARRAY: ");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }

    Reverse(arr,size);
    
    printf("\nREVERSE_ARRAY: ");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}
