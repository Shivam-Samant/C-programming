//       merge on 2 sorted arrays using MergeSort

// #include<stdio.h>
// void MergeSort(int A[],int n1,int B[],int n2,int C[],int n3){
//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2){
//     if(A[i]>=B[j]){
//         C[k]=B[j];
//         j++;
//         k++;}
    
//         else {C[k]=A[i];
//         i++;
//         k++;}
//     }
//     while(i<n1){
//         C[k]=A[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         C[k]=B[j];
//         j++;
//         k++;
//     }
// }
// int main(){
//     int A[]={7,9,18,19,22};
//     int n1=sizeof(A)/sizeof(int);
//     int B[]={1,6,9,11};
//     int n2=sizeof(B)/sizeof(int);
//     int n3=n1+n2;
//     int C[n3];
//     MergeSort(A,n1,B,n2,C,n3);
//     for(int i=0;i<n3;i++){printf("%d ",C[i]);} 
//     return 0;
// }


//       merge in a single arrays using MergeSort

#include<stdio.h>
void Merge(int A[],int mid,int low,int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int B[high+1];
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++; 
        }
    }    
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;}
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;}
    for(i=low;i<=high;i++){
        A[i]=B[i];}
}
void MergeSort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(A, low, mid);
        MergeSort(A,mid+1,high);
        Merge(A,mid,low,high);
    }
}


int main(){
    int A[]={1,8,15,5,5,15,9,6,7};
    int size=sizeof(A)/sizeof(int);
    MergeSort(A,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",A[i]);
    }
    return 0;
}










