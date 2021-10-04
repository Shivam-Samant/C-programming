// What does the following fragment of c program print?
#include<stdio.h>

int main(){
    char c[]="GATE2011";
    char *p=c;
    printf("%s",p+p[3]-p[1]);
    return 0;
}
// int main(){
//     char c[]="GATE2011";
//     char *p=c;  // Here pointer p contain the address of the first character(i.e. G) of string.
//     printf("%s",p+p[3]-p[1]);  // ex- if G address is = 1000
//     p+p[3]-p[1] then it will become 1000+E-A
//     p+p[3]-p[1] then it will become 1000+69-65
//     p+p[3]-p[1] then it will become 1000+4 =1004 ,  and 1004 is 2
//     printf("%s",p+p[3]-p[1]); then it's print the string starting from 2(end with null character)
//     return 0;
// }

