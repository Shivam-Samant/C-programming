// Swapping every pair of adjacent elements in an array
#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    
    printf("Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }

    for(int i=0;i<size;i+=2){
        int temp;
     
        if(size%2==1){
            if(i<size-1){temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                }  
        }
        else{
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
    }
    printf("\nNew Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }
    return 0;
}