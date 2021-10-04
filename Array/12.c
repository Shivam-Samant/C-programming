// Using pointers to print 2-D array
#include<stdio.h>

int main(){
    int a[2][2]={1,2,3,4};
    int row=2,col=2;

//           Without using pointer         
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++)
    //         printf(" %d ",a[i][j]);
    // }

//           With using pointer
    // Instead of using 2 for loop we can use single for loop for print 2-D array.
    // Row major only.
    int *p;
    for(p=&a[0][0];p<=&a[row-1][col-1];p++)
        printf(" %d ",*p);    
    return 0;
}