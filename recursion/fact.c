#include<stdio.h>
int fact(int n);
int main(){
    int number;
   // int factvalue;
    printf("enter the number => ");
    scanf("%d",&number);
     printf("factorial of the given number %d is %d",number,fact(number));
    return 0;
}
    
int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
   