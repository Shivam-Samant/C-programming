// FACT: Name of an aray can be used as a pointer to the FIRST ELEMENT of an array
#include<stdio.h>
int main(){
    // int a[5];
    // *a=10;
    // printf("*a: %d",a[0]);

// Sum of an array element using pointer

    // int a[]={11,22,36,5,2};
    // int sum = 0,*p;
    // for(p=a;p<a+5;p++){
    //     sum+=*p;}
    // printf("\nsum is %d ",sum);

// It is true that we can use array names as pointers,but assigning a new address to them is not possible
    // int a[]={11,22,36,5,2};
    // We are ASSIGN 1004 address (assume &a[0]=1000) to array name 'a'
    // Recall that name of the array indicates the base address of the array i.e.
    // printf("%u",a++);  // a++: a=a+1
    // OUTPUT: ERROR

//                RIGHT METHOD
    int a[]={11,22,36,5,2};
 // # Here we are not trying to "ASSIGN" some new address to 'a'.
 // # We are simply "ACCESSING" the address of the second element of the array.
    printf("%p",a+1);   // %p and %u both operators are use to print address.  
//                  OR  
    // int a[]={11,22,4,3};
    // int *p=a;
    // printf("OUTPUT: %d ",*(++p));
    return 0;
}