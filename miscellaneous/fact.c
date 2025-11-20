#include<stdio.h>
int main(){
    int number;
    int fact=1;
    printf("enter the number => ");
    scanf("%d",&number);
    for(int i =number;i>=1;i--){
         fact=fact*i;
    }
    printf("factorial of the given number %d is %d",number,fact);


    return 0;

}