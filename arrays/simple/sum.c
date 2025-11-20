#include<stdio.h>
void takearr(int arr[],int a);
void printarr(int arr[]);
int main(){
    int size;
    printf("enter the size =>");
    scanf("%d",&size);
    int arr[size];
    takearr(arr,size);
    printarr( arr);
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum of array =>%d ",sum);
    
    return 0;
}
void takearr(int arr[],int a){
 for (int i = 0; i < a ; i++)
    {
        printf("the the markes of %dst student =>",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
}
void printarr(int arr[]){
    printf("Array :");
    
    for (int i = 0; i < 10; i++)
    {   
        
        printf(" %d ",arr[i]);

    }
}