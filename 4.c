//PRINT THE PATTERN
// 1
// 11
// 121
// 1331
// 14641
#include<stdio.h>
int main(){
    int i,j,n;
    int a[5][5];
    printf("Enter the no. \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){

        for(j=0;j<=i;j++){
        //    if(j==a[i][0]||a[i][j]){a[i][0]=1;a[i][j]=1;printf("%d",a[i][0]);printf("%d",a[i][j]);}
        
            /* else*/ if(j!=a[i][0]&&a[i][j]) {
                        if(i>0 && j<n){a[i][j]=i; 
                        printf("%d",i);}
                        }
                   else if(j==a[(n+1/2)][n+1/2]){
                   a[n+1/2][n+1/2]=(a[i][j-1])+(a[i-1][j]);
                   printf("%d",a[(n+1/2)][n+1/2]);}
                   else {printf("%d",1);} 
                
             }
    printf("\n");
        }
        a[0][0]=1;
        printf("%d",a[0][0]);
    return 0;
}