#include<stdio.h>

void binarySearch(int a[], int low, int high, int key){
    int mid = (low+high)/2;
    if(a[mid] == key) {
        printf("search element: %d, position: %d\n", key, mid+1);
        return;
    }
    if(a[mid]<key){
        binarySearch(a, mid+1 , high, key);
    }
    else{
        binarySearch(a, low, mid-1, key);
    }
}

int main(){
    int a[10] = {1,5,6,9,10,15,20};
    int size = sizeof(a)/sizeof(int);
    int searchElm = 9;
    binarySearch(a,0,size-1,searchElm);
    return 0;
}