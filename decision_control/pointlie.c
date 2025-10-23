//this program cheak the given coordinate lies on x-axis or y-axis 
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the x and y co-ordinates =>");
    scanf("%d%d",&x,&y);
    if (x==0){
        printf("your co-ordinate lies on y-axis!");
    }else if (y==0)
    {
        printf("your co-ordinate lies on x-axix!");
    }
    
    return 0;
}