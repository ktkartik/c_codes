//this program circularly shift their values to right ;
#include<stdio.h>
void cshift(int *,int *,int *);
int main(){
    int a ,b,c;
    printf("enter the values the of a ,b,c =>\n" );
    scanf("%d %d %d",&a,&b,&c);
    cshift(&a,&b,&c);
    printf("a: %d ,b: %d ,c:%d",a,b,c);
    
    return 0;
}
void cshift(int *a,int *b,int *c){
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
}