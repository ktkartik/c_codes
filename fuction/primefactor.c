#include<stdio.h>
#include<math.h>
void numcheak(int num);
void primefactor(int num);
int main(){
    int number ;
    printf("enter the number =>");
    scanf("%d",&number);
    numcheak(number);
    primefactor(number);
    return 0;
}
void numcheak(int num){
    if(num%2==0){
        printf("number is even");
        printf(" ");   
    }
    else{
        printf("number is odd");
         printf(" "); 
    }
}
void primefactor(int num){
    printf("");
    while (num%2==0)
    {
        printf("2");
        printf(" ");
        num /=2;

    }
    
    for (int i = 3; i*i<= num ; i+=2)
    {
       
        while(num%i==0)
        {
            printf("%d",i);
            printf(" ");
            num/=i;
        }
        
    }
    
    
  
    if (num>2){
        printf("%d",num);
    }
    
}