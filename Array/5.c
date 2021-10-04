// Second smallest element in array
#include<stdio.h>

int main(){
    int a[]={1,2,0,4,5};
    int size=sizeof(a)/sizeof(int);
    int max;
    for(int i=0;i<size;i++){  
        if(a[i]>a[i+1]){max=a[i];}
        else if(a[i+1]>=a[i]){max=a[i+1];}
    }
    int S1=max,S2=max;
    for(int i=0;i<size;i++){
        if(a[i]<S1){
            S2=S1;
            S1=a[i];
            }
        else if(a[i]>=S1 && a[i]<=S2){
            S2=a[i];
        }
    }
    printf("First smallest element: %d \nSecond smallest element: %d",S1,S2);
    return 0;
}