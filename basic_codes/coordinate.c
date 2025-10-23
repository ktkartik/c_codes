//this program convert coordinates into polar coordinates 
#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    double r,phi;
    printf("Enter the x co-ordinate ==>");
    scanf("%d",&x);
    printf("Enter the y co-ordinate ==>");
    scanf("%d",&y);
    r=sqrt(x*x+y*y);
    phi=atan2(y,x);
    double phi_deg=phi*180/3.14;
    printf("'your these coordinates(%d,%d) converted into polar coordinate => (%f,%f)",x,y,r,phi_deg);

    return 0;
}