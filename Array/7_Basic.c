// Swap any 2 elements in an array using pointers
#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int *ptr = a;   // Because in array a-> &a[0]
    int size=sizeof(a)/sizeof(int);
    
    printf("Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }

    for(int i=0;i<size;i++){
        int temp=*(ptr+0);  
        *(ptr+0)=*(ptr+4);  // *(ptr+0) = a[0] element  & *(ptr+4) = a[4] element
        *(ptr+4)=temp;
    }
    
    printf("\nNew Array: ");
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }

    printf("\nBoth method are acceptable");
    printf("\na[0]: %d \n",a[0]); 
    printf("0[a]: %d \n",0[a]);


    return 0;
}