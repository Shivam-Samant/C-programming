// Check if an array is sorted (strictly increasing)

#include<stdio.h>
int Check(int a[],int size,int idx){
    if(idx==size-1){return printf("True: The array is sorted");}
    if(a[idx]<a[idx+1]){
        Check(a,size,idx+1);}
    else {return printf("False: The array is not sorted");}
}
int main(){
    int a[]={1,2,3,4,5,7,6};
    int size=sizeof(a)/sizeof(int);
    Check(a,size,0);
    return 0;
}
