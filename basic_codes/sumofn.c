//sum of five digit no 
#include<stdio.h>
int main(){
    int no,sum,n5,n4,n3,n2,n1;
    printf("enter the no =>");
    scanf("%d",&no);
    n5=no%10;
    no/=10;
     n4=no%10;
    no/=10;
     n3=no%10;
    no/=10;
     n2=no%10;
    no/=10;
     n1=no;
     sum=n5+n4+n3+n2+n1;
     printf("sum of your enter value =>%d",sum );

    return 0;
}