// Sum of the prime numbers in an array 
#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9},sum=0;
    int size=sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++){
        int p=1,j=2;
        if(a[i]==1 || a[i]==0){continue;}
        while(j<a[i]){
        if(a[i]%j==0){
            p=0; break;}
        j++;}
        if(p==1) { sum = sum+a[i]; }
        }
    
    printf("The sum of prime numbers are: %d",sum);
    return 0;
}