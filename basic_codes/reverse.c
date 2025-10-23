//reverse the particular no
#include<stdio.h>
int main(){
    int no,n1,n2,n3,n4,n5;
    printf("enter the no (less than 32757) =>");
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
   long int revno=n5*10000+n4*1000+n3*100+n2*10+n1;
   printf("'reverse no given no =>%d",revno);

    return 0;

}