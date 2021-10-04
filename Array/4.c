// Second largest element in an array
#include<stdio.h>

int main(){
    int arr[]={1,2,3,5,9,8,9};
    int size=sizeof(arr)/sizeof(int);
    int min;
    for(int i=0;i<size;i++){  
        if(arr[i]<=arr[i+1]){min=arr[i];}
        else if(arr[i+1]>arr[i]){min=arr[i+1];}
    }
    int l1=min,l2=min; // take minimum value (i.e. 0 : if positive number array )

    for(int i=0;i<size;i++){
    if(arr[i]>l1){
        l2=l1;
        l1=arr[i];
    }
    else if(arr[i]>l2 && arr[i]<=l1){
        l2=arr[i];
    }
}
    printf("Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);}
    
    printf("\nFirst largest element: %d\nSecond largest element: %d ",l1,l2);
    return 0;
}