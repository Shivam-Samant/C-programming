// String function
#include<stdio.h>
#include<string.h>
int main(){
    // STRLEN function (It's not count the null character)
    // char *st="Hello";
    // printf("The String is %s and it's length is %d",st,strlen(st));
    // ***********************************

    // STRCPY function (strcpy(target,source))
    // char *st="Hello World";
    // char s[15];
    // strcpy(s,st);
    // puts(s);
    // *************************************

    // STRCAT function (no space b/w two strings)
    // char st[10]="Hello "; // I give space after the word
    // char s2[10]="World";
    // strcat(st,s2);
    // puts(st);
    // ************************************

    // STRCMP function (if both string is same the value is 0)
    // char s1[10]="Hello";
    // char *s2="Hello";
    // int val = strcmp(s1,s2);
    // printf("Now the val is %d",val);
    // o/p is 0
    
    // char s1[10]="Hell";  // (null character ascii value is 0)
    // char *s2="Hello";
    // int val = strcmp(s1,s2);
    // printf("Now the val is %d",val);
    // o/p is -1
    // ****************************************
    return 0;
}