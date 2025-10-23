//this progrfam cheak three coordinates lies on straight line or not 
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    int area;
    printf("enter the x1 and y1 =>");
    scanf("%d%d",&x1,&y1);
    printf("enter the x2 and y2 =>");
    scanf("%d%d",&x2,&y2);
    printf("enter the x3 and y3 =>");
    scanf("%d%d",&x3,&y3);
    area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(area==0){
        printf("your co-ordinates lies on straight line ");
    }else{
        printf("your co-ordinates does not  lies on straight line!");
    }

    return 0;
}