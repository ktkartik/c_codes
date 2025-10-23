//find out the number of notes 
#include<stdio.h>
int main(){
    int money,nohun,no50,no20,no10,no5,no2,no1;
    printf("enter the amount ==>");
    scanf("%d",&money);
    nohun=money/100;
    money=money%100;
    no50=money/50;
    money%=50;
    no20=money/20;
    money%=20;
    no10=money/10;
    money%=10;
    no5=money/5;
    money%=5;
    no2=money/2;
    money%=2;
    no1=money/1;
    money%=1;
    int total=nohun+no50+no20+no10+no5+no2+no1;
    printf("total no of notes =%d",total);



    return 0;

}