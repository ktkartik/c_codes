//find out the distance between two points 
#include<stdio.h>
#include<math.h>
int main(){
    int l1,l2,g1,g2;
    double distance;
    printf("enter the latitude L1 ,L2 =>");
    scanf("%d %d",&l1 ,&l2);
    printf("enter the latitude L1 ,L2 =>");
    scanf("%d %d",&g1 ,&g2);
    int gd=g2-g1;
    double x=sin(l1)*180/3.14*sin(l2)*180/3.14+cos(l1)*180/3.14*cos(l2)*180/3.14*cos(gd)*180/3.14;
    distance=3963*acos(x);
    printf("Distance between two cities =>%d",&distance);
    


    return 0;

}