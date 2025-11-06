#include<stdio.h>
void leapyear(int year);
int main(){
    int year;
    printf("enter year =>");
    scanf("%d",&year);
    leapyear(year);
    return 0;
}
void leapyear(int year){
    if(year%4==0){
        printf("this is the leap year");
    }else{
        printf("this is not a leap year");
    }
}