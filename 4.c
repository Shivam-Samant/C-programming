//PRINT THE PATTERN
// 1     
// 11    
// 121      
// 1331  
// 14641    
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no. \n");
    scanf(" %d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) {
                a[i][j]=1;
                printf("%d",a[i][j]);
                }
            else {
                a[i][j]=a[i-1][j-1] + a[i-1][j];
                printf("%d",a[i][j]);
                }
        }
    printf("\n");
    }
    return 0;
}