// Write a program to check whether a given character is present in a string or not.
#include<stdio.h>
int check_char(char *st,char a){
    char *ptr=st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==a){
            count++;
        }
            ptr++;
    }
    return count;
}

int main(){
    char st[]="Hello";
    int count=check_char(st,'o');
    if(count==0){
            printf("The o character is not present in string\n");
    }
    else{
            printf("The o character is present in string\n");
    }
    return 0;
}