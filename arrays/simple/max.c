#include<stdio.h>
int main(){
    int arr[6];
    for (int  i = 0; i < 6; i++)
    {
        printf("enter the %d valve in array =>",i+1);
        scanf("%d ",&arr[i]);
        printf("\n");
    }
    int max=-1;
    for (int  i = 0; i < 6; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("maximum value in array => %d",max);
    int min=arr[0];
    for (int i = 0; i < 6; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
     printf("minimum value in array => %d",min);
    
    
    return 0;
}