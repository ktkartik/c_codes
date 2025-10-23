//caculate wind -chill factor
#include<stdio.h>
#include<math.h>
int main(){
    double wcf;
    int t;
    int v;
    printf("enter the temperature =>");
    scanf("%d",&t);
    printf("enter the velocity =>");
    scanf("%d",&v);
    wcf = 35.74 + 0.6215*t - 35.75*pow(v, 0.16) + 0.4275*t*pow(v, 0.16);
    printf("wind-chill factor (wcf) =%f",wcf);
    return 0;
}