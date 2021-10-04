// Path of matrix
#include<stdio.h>
int path(int m,int n){
    if(m==1 || n==1){return 1;}
    return path(m-1,n)+path(m,n-1);
}
int main(){
    int m=4,n=4;
    int ans = path(m,n);
    printf("%d ",ans);
    return 0;
}



