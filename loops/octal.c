//find the octal integer 
#include<stdio.h>
int main(){
    int num,orginal;
    int reminder=0;
    int octal;
    printf("enter the number =>");
    scanf("%d",&num);
    orginal=num;
     int n=1;
    while (num!=0)
    {     
        reminder = num%8;
        octal=octal+reminder*n;
        num=num/8;
        n=n*10; 
        
        
    }
    printf("octal of the given number (%d) is %d ",orginal,octal);
    
    return 0;
}