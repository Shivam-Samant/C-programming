// Typedef keyword
#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(emp emp1){   // Using typedef keyword
    printf("The code of employee is :%d\n",emp1.code);
    printf("The salary of employee is :%f\n",emp1.salary);
    printf("The name of employee is :%s\n",emp1.name); 
}

int main(){
    emp e1; // Using typedef keyword
    e1.code=100;
    e1.salary=100.1342;
    strcpy(e1.name,"Shivam");
    show (e1); 
    printf("After show function the value of code for e1 is :%d ",e1.code); 
    return 0;
}