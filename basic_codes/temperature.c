//this program change the temperature from fahrenheit to centigrade degree
// c= (f-32)*5/9
#include<stdio.h>
int main(){
    float temp;
    printf("enter the temperature in fehrenheit ==>");
    scanf("%f",&temp);
    float cent=(temp-32)*5/9;
    printf("your temperature in centigrade => %f",cent);
    return 0;

}