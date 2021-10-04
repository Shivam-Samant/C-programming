// Write a program to count the occurence of a given character in a string
#include<stdio.h>
int occurance(char *st,char a){
    // int i=0,count=0;
    // while(st[i]!='\0'){
    //     if(st[i]==a){
    //         count++;
    //     }
    //     i++;
    // }
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
    char st[]="Helloooooooooo";
    int count=occurance(st,'o');
    printf("Occurence = %d",count);
    return 0;
}