// Adds an element at the given index
#include<stdio.h>
void Insert(int *arr,int n,int element,int pos){
    for(int i=n-1;i>=pos;i--){
        if(i==pos){
            arr[pos]=element;
        }
            arr[i+1]=arr[i];
    }
}
int main(){
    int n,element,pos,arr[100];
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter the element %d value of an array: ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("Which element you insert on this array: \n");
    scanf("%d",&element);

    printf("Which index you insert this element on this array: \n");
    scanf("%d",&pos);

    printf("Before insert function: Array: ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    } 
    
    Insert(arr,n,element,pos);  
 
    printf("\nAfter insert function: Array: ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    } 
    return 0;
}