// What does the following function of c program print?  (GATE CS 2015(SET 2))

#include<stdio.h>
void foo(char *st){
    if(*st & *st != ' '){
        foo(st+1);
        putchar(*st);
    }
}
int main(){
    char st[20]="ABCD EFGH";
    foo(st);
    return 0;
}