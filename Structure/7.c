// Create an array of 5 complex no. and display then with the help of a display function.
// and value must be taken as an input from the user.

#include<stdio.h>
typedef struct imaginary{
    int real;
    int imaginary;
}comp;

void display(comp c){
    printf("The value of real part is %d\n",c.real);
    printf("The value of imaginary part is %d\n",c.imaginary);
}
int main(){
    comp cnum[5];
    for(int i=0;i<5;i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&cnum[i].real);

        printf("Enter the imaginary value for %d num\n",i+1);
        scanf("%d",&cnum[i].imaginary);
    } 
    for(int i=0;i<5;i++){
        display(cnum[i]);
    } 
    return 0;
}