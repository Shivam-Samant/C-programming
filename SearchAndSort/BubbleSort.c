#include<stdio.h>
void BubbleSort(int arr[],int size){
    int i,j,temp;
    // i loop-->for no. of pass(jitne baar humko compare karna hai) 
    // ex-arr is 1,2,3 then i loop iterate 2 times
    // it's compare (0,1) and (1,2) index
    for(i=0;i<size-1;i++){    
    // j loop-->for comparision in each pass
    // ex-arr is 2,1,4,3  then j loop run(iterate) 
    //           1,2,4,3    for j=0  3 comparisions and 3 possible swap : iterate-->3 times(0-1,1-2,2-3) 
    //           1,2,4,3    for j=1  2 comparisions and 2 possible swap : iterate-->2 times(0-1,1-2)
    //           1,2,3,4    for j=2  1 comparisions and 1 possible swap : iterate-->1 times(0-1)
        for(j=0;j<size-i-1;j++){
            if(arr[j]>=arr[j+1]){
                // swap the greater element with smaller element        
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
        }
    }
}
int main(){
    int arr[]={1,4,2,8,9,20,15,12,8,4,2};
    int size=sizeof(arr)/sizeof(int);
    BubbleSort(arr,size);
    for(int i=0;i<size;i++){printf("%d ",arr[i]);}
    return 0;
}