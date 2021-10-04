// Move all x to the end of the string: "axbcxxd"

#include<stdio.h>
#include<string.h>
int count=0,i=0;
void MoveX(char *str,int idx,int size,char element){
    char *st=str;    
    if(*(str+idx)=='\0'){
        for(i;i<size;i++){ *(st+i)='x';}
        printf("\tNew string: %s",st); 
        return;}
   if(*(str+idx)!= element ){
        *(st+i)=*(str+idx); 
        i++;}


//    else if(*(str+idx) == element) {
//     //    *(str+size-count)=element;
//        count++;
//        }
    
    MoveX(str,idx+1,size,element);
}
int main(){
    char str[]="axbcxxd";
    int size=strlen(str);
    printf("String: %s\t",str);
    MoveX(str,0,size,'x');
    return 0;
}