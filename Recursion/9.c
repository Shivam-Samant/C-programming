// Print a string in reverse

#include<stdio.h>
#include<string.h>
void reverse(char *str,int n){
    if(n==0){
        printf("%c ",*str);
        return;}
    reverse(str+1,n-1);
    printf("%c ",*str);
}
int main(){
    char str[]="abcd";
    int n=strlen(str);
    reverse(str,n);
    return 0;
}