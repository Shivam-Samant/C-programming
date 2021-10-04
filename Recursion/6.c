// print x^n (stack height = logn)
#include<stdio.h>
int calcPower(int x, int n){
    if(x==0){return 0;}
    if(n==0){return 1;}
    if(n%2==0){
        return calcPower(x,n/2)*calcPower(x,n/2);
    }
    else{
        return calcPower(x,n/2)*calcPower(x,n/2)*x;
    }
}
int main(){
    int x=2,n=6;
    int ans = calcPower(x,n);
    printf("%d ",ans);
    return 0;
}