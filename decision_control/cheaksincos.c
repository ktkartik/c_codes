//this program cheak whether sum of squares of sine and cosine is equal to 1 
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter the angle =>");
    scanf("%d",&x);
    int angle= pow(sin(x),2)+pow(cos(x),2);
    if(angle==1){
        printf("square of sin and cos is equale to one ");
    }else{
        printf("square of sin and cos is not equale to one");
    }

    return 0;
} 