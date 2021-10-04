// Fast power calculation (stack height=logn)
#include<stdio.h>
int step;
int calc_pow(int x,int y){
    step++;
    if(x==0){return 0;}
    if(y==0){return 1;}

    if(y%2==0){return calc_pow(x*x,y/2);}
    else{return x*calc_pow(x,y-1);}
}
int main(){
    int x=5,y=50;
    int ans = calc_pow(x,y);
    printf("Ans = %d ",ans);
    printf("\nTotal step = %d ",step);
    return 0;
}