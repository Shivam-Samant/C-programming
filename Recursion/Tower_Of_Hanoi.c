#include<stdio.h>
void TowerOfHanoi(int n, char src,char helper,char dest){
    if(n==1){printf("Transfer disc %d from %c to %c\n",n,src,dest);
    return;}
    TowerOfHanoi(n-1,src,dest,helper);
    printf("Transfer disc %d from %c to %c\n",n,src,dest);   
    TowerOfHanoi(n-1,helper,src,dest);
}
int main(){
    int n=3;
    TowerOfHanoi(n,'S','H','D');
    return 0;
}