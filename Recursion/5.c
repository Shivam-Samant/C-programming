// Print x^n (stack hight = n)
#include<stdio.h>
int step;

int xpown(int x,int n){    // n=5,level=6 : but the difference is neglegible(i.g. n=999999, level=1000000) 
    step++;
    if(n==0){return 1;}
    if(x==0){return 0;}
    int pow=x * xpown(x,n-1);
    return pow;
}
int main(){
    int x=5,n=50;
    int ans=xpown(x,n);
    printf("Ans = %d ",ans);
    printf("\nTotal step = %d ",step);
    return 0;
}