// Pointer to structures
#include<stdio.h>
struct employee{
    int code;
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    // (*ptr).code=100; 
    //       OR
    ptr->code=100;  // -> is known as arrow operator
    printf("%d",e1.code);
    return 0;
}