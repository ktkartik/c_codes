#include<stdio.h>
int main (){
    int arr[6]={2,3,4,5,6,7,8};
    int target=8;
    printf("pairs : ");
    for (int  i = 0; i < 6; i++)
    {
        for (int j = i; j <6 ; j++)
        {
            if(arr[i]+arr[j]==target){
                printf("%d,%d ",arr[i],arr[j]);
            }
        }
        
    }
   
   
    
    
    return 0;
}