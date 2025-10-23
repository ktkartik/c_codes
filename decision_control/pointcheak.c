//this program cheak the co-ordinates inside the circle or outside the circle or on the circle 
#include<stdio.h>
#include<math.h>
int main(){
    /*x,y is the coordi of center of circle 
      h,k is the coordi for cheak 
    */
    int x,y,h,k,r;
    float distance;
    printf("enter the radius of circle ==>");
    scanf("%d",&r);
    printf("enter x or y co-ordinate ==>");
    scanf("%d%d",&x,&y);
    int a =h-x;
    int b=k-y;
    distance =sqrt(pow(a,2)+pow(b,2));
    if(distance ==r){
        printf("Yoour co-ordinates lies on the circle!");
    }else if(distance<r){
        printf("your co-ordinate inside the circle !");
    }else if (distance> r)
    {
        printf("your co-ordinate lies outside the circle ");
    }
    return 0;
}