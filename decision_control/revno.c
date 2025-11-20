//this program reverse the entered no and and verify the given no and reversed no is same or not 
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number =>");
    scanf("%d",&number);
     int original_no=number;
   
    int unit_digit =0;
    unit_digit=number%10+unit_digit;
    number /=10;
    unit_digit *=10;

    
    unit_digit=number%10+unit_digit;
    number /=10;
    unit_digit *=10;

   
    unit_digit=number%10+unit_digit;
    number /=10;
    unit_digit *=10;


    unit_digit=number%10+unit_digit;
    number /=10;
    unit_digit *=10;


    
    
    unit_digit +=number;

    printf("Reversed no => %d",unit_digit);
    if (original_no == unit_digit){
        printf("\nBoth numbers are same !");
    }else{
        printf("\nBoth numbers are different ! ");
    }
    return 0;
}