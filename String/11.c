//        PUTCHAR FUNCTION
// PROTOTYPE - int putchar(int ch)  or char putchar(char ch)
// putchar accepts an integer argument (which represents a character it wants to display)
// and returns an integer representing the character written on the screen.

#include<stdio.h>

int main(){
       int ch;
    // char ch;
    for(ch='A';ch<='Z';ch++){
        putchar(ch);
        // printf("%c ",ch);
        putchar(' ');
    }
    return 0;
}
