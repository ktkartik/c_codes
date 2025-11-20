#include<stdio.h>
int main (){
    int arr[6]={2,3,4,5,6,7,8};
    for (int  i = 0; i < 6; i++)
    {
        if(i%2!=0){
            arr[i]=arr[i]+2;
        }
         if(i%2==0){
            arr[i]=arr[i]+10;
        }
    }
    printf("Array : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}