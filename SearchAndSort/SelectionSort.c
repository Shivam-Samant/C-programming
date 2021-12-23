#include<stdio.h>

void SelectionSort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){     // for compare
        for(j=i+1;j<size;j++){ // for pass  
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    // int arr[]={2,9,0,3,8,4,7,5,6};
    int arr[]={1,3,2,9,4,8,5,0};
    int size = sizeof(arr)/sizeof(int);
    SelectionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


// //                 OR

// // //             SELECTION SORT

// // #include <stdio.h>
// // int SelectionSort(int arr[], int size, int k)
// // {
// //     int LOC, MIN;
// //     MIN = arr[k];
// //     LOC = k;
// //     //for minimum element index.
// //     for (int j = k + 1; j < size; j++)
// //     {
// //         if (MIN > arr[j])
// //         {
// //             MIN = arr[j];
// //             LOC = j;
// //         }
// //     }
// //     return LOC;
// // }
// // int main()
// // {
// //     int arr[] = {1, 3, 2, 9, 8, 5, 4, 6, 200, 100, 150};
// //     int size = sizeof(arr) / sizeof(int);
// //     int k, LOC, temp;
// //     for (k = 0; k < size; k++)
// //     {
// //         LOC = SelectionSort(arr, size, k);
// //         //swap higher element to minimum element
// //         temp = arr[k];
// //         arr[k] = arr[LOC];
// //         arr[LOC] = temp;
// //     }
// //     for (k = 0; k < size; k++)
// //     {
// //         printf("The sorted array is %d\n", arr[k]);
// //     }
// //     return 0;
// // }

