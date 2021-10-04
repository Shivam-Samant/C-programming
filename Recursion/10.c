// // Find the first and last occurance of an element in string

#include<stdio.h>
#include<string.h>
void Occurance(char *str,int idx,char element, int first,int last){
    char currChar=*(str+idx);
    if(*(str+idx)=='\0'){
        printf("First occurance index: %d and last occurance index: %d",first,last);
        return;}
    if(currChar==element){
        if(first==-1) {first=idx;}
        else {last=idx;}
    }
    Occurance(str,idx+1,element,first,last);
}
int main(){
    char str[]="abaacdaefaah";
    Occurance(str,0,'a',-1,-1);
    return 0;
}

