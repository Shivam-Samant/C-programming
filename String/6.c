// Write a function slice() to slice a string(original).Take m & n as the start and end pos. for slice
#include<stdio.h>
void slice(char *st,int m,int n){
    int i=0;
    while((i+m)<=n){
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}

int main(){
    char st[]="Hello";
    int m=1,n=3;
    slice(st,m,n);
    printf("%s",st);
    return 0;
}