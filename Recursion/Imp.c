// Print all the subsequences of a string

#include<stdio.h>
#include<string.h>
void subsequence(char *str,int idx){
    char st[26];
    if(idx==strlen(str)){
        printf("New string: %s",st);
        return;}
    char currChar=*(str+idx);
    subsequence(str,idx+1);
    subsequence(str,idx+1);
}
int main(){
    char str[]="abc";
    subsequence(str,0);
    return 0;
}