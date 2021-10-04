// Repeated element and count
#include<stdio.h>
#include<conio.h>
int main(){
    int a[10]={1,2,2,3,3,3,4,4,4,4};
    int size=sizeof(a)/sizeof(int);
    for(int i=0;i<size-1;i++){
    int count=1;
        for(int j=i+1;j<size;j++){
            if(a[i]==0){continue;}
            if(a[i]==a[j]){
                count++; 
                a[j]=0;}
            }   
    if(count>1){
        printf("\n %d repeated %d times\n",a[i],count);
        }
    }
    return 0;
}