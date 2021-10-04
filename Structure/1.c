// Initialization of structures
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10]; 
};

int main(){
    // struct employee Harry={100,71.22,"Harry"}; 
    // struct employee Shubham={0}; // All elements set to 0
    //              OR
    struct employee e1; 
    e1.code=100;
    e1.salary=34000.123456;
    // e1.name="Shivam"  --> won't work
    strcpy(e1.name,"Shivam"); // it's work
    printf("First employee code is %d, salary is %f and name is %s",e1.code,e1.salary,e1.name);
    return 0;
}