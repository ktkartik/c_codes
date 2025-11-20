#include<stdio.h>
void printarr(int arr[]);
void takearr(int arr[]);
int main(){
    int arr[10];
    takearr(arr);
    printarr(arr);
    
    for (int i = 0; i < 10; i++)
    {   
        
       
        if(arr[i]<35){
            printf("%d",i);
           printf("\n");  
        }
       

    }
    
    
    return 0;
}
void printarr(int arr[]){
    printf("Array :");
    
    for (int i = 0; i < 10; i++)
    {   
        
        printf(" %d ",arr[i]);

    }
}
void takearr(int arr[]){
 for (int i = 0; i < 10; i++)
    {
        printf("the the markes of %dst student =>",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
}