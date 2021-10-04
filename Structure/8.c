// Write a structure capable of storing date. Write a function to compare those dates.
#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
}

int date_cmp(date d1,date d2){
    if(d1.year>d2.year){return 1;}
    else if(d1.year<d2.year){return -1;}
    
    if(d1.month>d2.month){return 1;}
    else if(d1.month<d2.month){return -1;}
    
    if(d1.date>d2.date){return 1;}
    else if(d1.date<d2.date){return -1;}
    return 0;
}
int main(){
    date d1={5,9,22};
    date d2={5,9,21};
    display(d1);
    display(d2);
    int a = date_cmp(d1,d2);
    if(a==1){printf("The first date is greater than second date");}
    if(a==-1){printf("The first date is smaller than second date");}
    if(a==0){printf("The first date and second date both are same");}
    return 0;
}