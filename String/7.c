// write a program to decrypt the string encrypted using encrypted function.
#include<stdio.h>

// for encryption
// void encrypted(char *st){
//     // puts(st);
//     char *ptr=st;
//     while(*ptr!='\0'){
//         *ptr=*ptr+1;
//          ptr++;
//     }
//     // puts(st);
// }

// int main(){
//     // if we use char *st="afhe";  //*st is only read only memory so we can't change value  
//     char st[]="Tehri hydro development corporation institute of hydro engineering and technology";
//     puts(st);
//     encrypted(st);
//     puts(st);

void decrypted(char *st){
    // puts(st);
    char *ptr=st;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
         ptr++;
    }
    // puts(st);
}

int main(){
    // if we use char *st="afhe";  //*st is only read only memory so we can't change value  
    char st[]="Ufisj!izesp!efwfmpqnfou!dpsqpsbujpo!jotujuvuf!pg!izesp!fohjoffsjoh!boe!ufdiopmphz";
    printf("The string before decrypt is: %s\n",st);
    decrypted(st);
    printf("The string after decrypt is: %s\n",st);
    return 0;
}