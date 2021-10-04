// Sum of Fibonacci series
#include<stdio.h>
void printFib(int a, int b, int n){
    if(n==0){return;}
    int c=a+b;
    printf("%d ",c);
    printFib(b,c,n-1);
}
int main(){
    int a=0,b=1,n=7;
    printf("%d ",a);
    printf("%d ",b);
    printFib(a,b,n-2);
    return 0;
}

//         OR
//wrong

// #include<stdio.h>
// int fib(int n){
//     if(n==1 || n==2){return 1;}
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n=5;
//     int ans=fib(n);
//     printf("%d ",ans);
//     return 0;
// }