#include<stdio.h>
int BinarySearch(int arr[],int size, int element){
    int Low=0;
    int High=size-1;
    while(Low<=High){
    int Mid=(Low+High)/2;
        if(arr[Mid]==element){return Mid;}
        if(arr[Mid]<element){Low=Mid+1;}
        else{High=Mid-1;}
    }
    return -1;
}

int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=4;
    int SearchIndex=BinarySearch(arr,size,element);
    printf("The element is %d and it's index is %d",element,SearchIndex);
}