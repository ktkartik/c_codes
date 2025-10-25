#include<stdio.h>
int main(){
    int n;
    printf("how many no you want to take =>");
    scanf("%d",&n);
    int i=1;
    int negn=0;
    int posn=0;
    int zeros=0;
    while (i<=n)
    {
       int number;
       printf("enter the %d no =>",i);
       scanf("%d",&number);
       if(number==0){
        zeros++;
       }
       if (number>=0)
       {
       posn++;
       }
       if (number<0)
       {
        negn++;
       }
       
       i++;
    }
    printf("no of positive number is %d ",posn);
    printf("\nno of negative number is %d ",negn);
    printf("\nno of zeros is %d ",zeros);
    return 0;
}