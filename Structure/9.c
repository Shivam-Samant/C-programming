// Write a structure capable of storing TimeStamp. Write a function to compare those TimeStamps.
#include<stdio.h>
typedef struct TimeStamp{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
}TimeStamp;

void display(TimeStamp d){
    printf("The TimeStamp is: %d/%d/%d %d:%d:%d \n",d.date,d.month,d.year,d.hour,d.minute,d.second);
}

int TimeStamp_cmp(TimeStamp d1,TimeStamp d2){
    if(d1.year>d2.year){return 1;}
    else if(d1.year<d2.year){return -1;}
    
    if(d1.month>d2.month){return 1;}
    else if(d1.month<d2.month){return -1;}
    
    if(d1.date>d2.date){return 1;}
    else if(d1.date<d2.date){return -1;}
    
    if(d1.hour>d2.hour){return 1;}
    else if(d1.hour<d2.hour){return -1;}
   
    if(d1.minute>d2.minute){return 1;}
    else if(d1.minute<d2.minute){return -1;}
   
    if(d1.second>d2.second){return 1;}
    else if(d1.second<d2.second){return -1;}
    return 0;
}
int main(){
    TimeStamp d1={5,9,22,2,45,45};
    TimeStamp d2={5,9,21,3,45,45};
    display(d1);
    display(d2);
    int a = TimeStamp_cmp(d1,d2);
    if(a==1){printf("The first TimeStamp is greater than second TimeStamp");}
    if(a==-1){printf("The first TimeStamp is smaller than second TimeStamp");}
    if(a==0){printf("The first TimeStamp and second TimeStamp both are same");}
    return 0;
}