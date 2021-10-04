// Difference b/w two init methods
#include<stdio.h>

int main(){
    // we can't change string value once we initialize this using below method
    // char ptr[]="Harry Bhai";
    // ptr="Shubham bhai";
    // puts(ptr);
    // ***********

    // we can change string value once we initialize this using below method
    char *ptr="Harry Bhai";
    ptr="Shubham bhai";
    puts(ptr);
    return 0;
}