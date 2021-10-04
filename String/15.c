// What does the following of c program print?  (GATE CS  IT 2017)
#include<stdio.h>
#include<string.h>
int main(){
    char *c="GATECSIT2017";
    char *p=c;
//strlen returns a size_t type data. Therefore, (int) will convert the size_t type to int type.    
    printf("OUTPUT: %d",(int)strlen(c+2[p]-6[p]-1)); 
    return 0;
}

// 1.  In this program the character pointer (c) store the address of first element in string
// 2.  Then character pointer p also store the address of character c(address of 1st element in string)
// 3.  2[p]=*(2+p)  and 6[p]=*(6+p)
// 4.  let c=1000 then p also equal to 1000
// 5.  then strlen(1000+T-I-1) 
// 6.  If we assume I=1 then T=12    // first assume I because it come first compare to T
// 7.  strlen(1000+12-1-1) -> strlen(1010)
// 8.  Then strlen function count the no. of element in string (starts from 11th element to end)
// 9.  strlen returns a size_t type data. Therefore, (int) will convert the size_t type to int type.
// 10. OUTPUT: 2