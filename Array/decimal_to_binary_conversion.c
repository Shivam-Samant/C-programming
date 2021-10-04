#include<stdio.h>
void Binary_conversion(int n){
    int arr[50],r,count=0;
            for(int i=0;n!=0;i++){
                r=n%2; 
                arr[i]=r;
                n=n/2;
                count++;
        }

        printf("Decimal value: ");
        for(int j=0;j<count;j++){
        printf("%d ",arr[j]);}

        printf("\nBinary value: ");
        for(int j=count-1;j>=0;j--){
        printf("%d ",arr[j]);}
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    Binary_conversion(n);
    return 0;
}