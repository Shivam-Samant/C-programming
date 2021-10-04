// Remove duplicate in a string : "abbccda"

#include<stdio.h>
#include<string.h>
int i=0;
void delDuplicate( char *str,int idx){
    char *st=str;
    if(*(str+idx)=='\0'){
        // printf("New string: %s",st);
        return;}
    char currChar=*(str+idx);
    if(currChar!=*(str+idx+1)){
        *(st+i)=*(str+idx); i++;
        printf("%c",currChar);
    }
    else{printf("%c",currChar); idx++;}
    delDuplicate(str,idx+1);
}
int main(){
    char str[]="abbccd";
    printf("String: %s\n",str);
    delDuplicate(str,0);
    return 0;
}