// Factorial of 5
#include<stdio.h>
int calcFact(int n){
    if(n==1 || n==0){return 1;}
    return n*calcFact(n-1);

    }
int main(){
    int n=5;
    int Factorial=calcFact(n);
    printf("%d ",Factorial);
    return 0;
}