// Write a program to take string as an input from the user using %s and %c.
#include<stdio.h>
#include<string.h>
int main(){
    char c,s1[20],s2[20];
    int i=0;
    printf("Enter the value of first string\n");
    scanf("%s",s1);
    printf("Enter the value of second string character by character\n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        s2[i]=c;
        i++;
    }
    s2[i]='\0';
    // puts(s1);
    // puts(s2);
    printf("The value of s1 is %s\n",s1);
    printf("The value of s2 is %s\n",s2);
    return 0;
}