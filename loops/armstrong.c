//give all the armstrong np between 0 -255
//A number is called Armstrong if sum of each digit raised to the power of total digits = the number itself

#include<stdio.h>
#include<math.h>
int main(){
    int no,original,reminder,digits;
    double sum ;
    printf("Armstrong no ===>");
    for (no=0;no<=500;no++){
        sum=0;
        original = no;
        digits=0;
        

        //count digits
        int temp =no;
        while (temp!=0)
        {
            temp=temp/10;
            digits++;
        }
        //this is for zero,because zero to pow zero is not defined 
        if (digits==0)
        {
            digits=1;
        }
        //calculate sum
        temp=no;
        while (temp!=0)
        {
            reminder=temp%10;
            sum=sum+pow(reminder,digits);
            temp=temp/10;
        }
        //cheak armstrong
        if(sum ==original){
            printf("%d  \n",original);
        }  
    }
    return 0;
}
