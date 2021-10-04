// Print even and odd numbers separately
#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(int);
    int even[size],odd[size];
    int p=0,r=0;
    for(int i=0;i<size;i++){
        if(a[i]%2==0) {even[r]=a[i];r++;}
        else {odd[p]=a[i];p++;}
    }
        
    printf("Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }
    printf("\nEven numbers: ");
    for(int i=0;i<r;i++){
    printf("%d ",even[i]);
    }
    
    printf("\nOdd numbers: ");
    for(int i=0;i<p;i++){
    printf("%d ",odd[i]);
    }


    return 0;
}