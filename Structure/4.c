// Passing structure to function
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee *emp){
    printf("The code of employee is :%d\n",(*emp).code);
    printf("The salary of employee is :%f\n",(*emp).salary);
    printf("The name of employee is :%s\n",(*emp).name);

    (*emp).code=200;  
}

int main(){
    struct employee e1;
    e1.code=100;
    e1.salary=100.1342;
    strcpy(e1.name,"Shivam");
    show (&e1); // Call by reference
    printf("After show function the value of code for e1 is :%d ",e1.code); 
    return 0;
}