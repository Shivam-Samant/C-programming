// Print the sum of 10 natural numbers
#include<stdio.h>
void PrintSum(int i,int n,int sum){
    if(i==n){
        sum=sum+i;
        printf("%d ",sum);
        return;
    }
    sum=sum+i;
    PrintSum(i+1,n,sum);
}
int main(){
    int i=1,n=10,sum=0;
    PrintSum(i,n,sum);
    return 0;
}
