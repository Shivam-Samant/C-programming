#include<stdio.h>
int LinearSearch(int arr[],int size, int element){
    int i=0;
    while(i<size)
    {
        i++;
        if(arr[i]==element){return i;}
    }
        return -1;
}
int main(){
    int arr[]={1,4,2,8,9,6,5};
    int size=sizeof(arr)/sizeof(int);
    int element=5;
    int SearchIndex=LinearSearch(arr,size,element);
    printf("The element is %d and it's index is %d",element,SearchIndex);
    return 0;
}