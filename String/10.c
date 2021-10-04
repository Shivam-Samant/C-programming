// GETCHAR FUNCTION -> getchar() function is used to read one character at a time from the user input.

// Q) We want our input function to have following functionalities
// 1. It must continue to read the string even after seeing white spadce characters.
// 2. It must stop reading the string after seeing the newline character.
// 3. It must discard extra characters.
// 4. And it must return the numbers of characters it stores in the character.

#include<stdio.h>
int input(char str[],int n){
    int ch,i=0;  // getchar function returns an integer equivalent to the ASCII code of the character
                 // This is the reason why we have int ch in place of char ch
    printf("Enter the string: ");
    while((ch=getchar())!='\n')
     if(i<n)str[i++]=ch;
     str[i]='\0';
     return i;
}

int main(){
    char str[20];
    int n=input(str,5);
    printf("%d %s",n,str);
    return 0;
}