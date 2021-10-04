// Rotate the array elements k times. (Left and Right)
#include<stdio.h>
int main(){
    int a[]={30,20,40,50,60,80},k,i,j;
    int size=sizeof(a)/sizeof(int);
    printf("How many times rotates the array elements: ");
    scanf("%d",&k);
    
    printf("Before rotation: ");
    for(int i=0;i<size;i++){
    printf(" %d ",a[i]);
    }
    
//                      LEFT ROTATION

//     for(i=0;i<k;i++){
//         int temp=a[0];
//         for(j=0;j<size;j++){
//             a[j]=a[j+1];
//         }
//             a[j]=temp;   
//     }

//                      RIGHT ROTATION
    for(i=0;i<k;i++){
    int temp=a[size-1];

    for(j=size-1;j>=1;j--){
        a[j]=a[j-1];
    }
    a[j]=temp;
}
    printf("\nAfter rotation: ");
    for(int i=0;i<size;i++){
    printf(" %d ",a[i]);
    }
    return 0;
 }