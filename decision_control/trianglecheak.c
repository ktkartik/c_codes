//this code cheak which type of triangle 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the length of sides a ,b,c =>");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("triangle is equilateral");
    }else if (a==b||b==c||c==a)
    {
        printf("triangle is isosceles ");
    }else{
        printf("tringle is scalene");
    }
    
    return 0;
}