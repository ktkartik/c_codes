//this program cheak the day on 1st of jan for any year 
#include<stdio.h>
int main(){
    int givenyear=2001;
    int year,days;
    printf("enter the year =>");
    scanf("%d",&year);
    int difference = year -givenyear;//2007 -2001=6
    int leapyear = difference /4; //6/4=1
    int non_leapyear = difference - leapyear;
    days =366*leapyear +365*non_leapyear+1;
    int no =days%7;
    if(no==1){
        printf("in year %d ,day on first january = Monday",year);
    }if(no==2){
        printf("in year %d ,day on first january = Tuesday",year);
    } if(no==3){
        printf("in year %d ,day on first january = Wednesday",year);
    } if(no==4){
        printf("in year %d ,day on first january = Thursday",year);
    } if(no==5){
        printf("in year %d ,day on first january = Friday",year);
    } if(no==6){
        printf("in year %d ,day on first january = Saturday",year);
    } if(no==0){
        printf("in year %d ,day on first january = Sunday",year);
    }

    return 0;
}