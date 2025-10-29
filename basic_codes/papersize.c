#include<stdio.h>
int main(){
    int height=1189;
    int width=841;
    int temp;
    printf("A0 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA1 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA2 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA3 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA4 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA5 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA6 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA7 => %d %d",height,width);
    temp =height;
    height=width;
    width=temp/2;
    printf("\nA8 => %d %d",height,width);

    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n--------------------------------------------------------------------------------------------\n");
     int h=1189;
     int w=841;
     int t;
    for (int i =0;i<9;i++){
        
        printf("A%d => %d ,%d\n",i,h,w);
        t=h;
        h=w;
        w= t/2;
    }
    return 0;
}