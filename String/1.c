// gets and puts
#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    printf("Enter your name: ");
    gets(a);
    printf("My name is ");
    puts(a);
    return 0;
}